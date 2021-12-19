import bs4 as bs
import requests
import time

def scrape(problem_code):
    totalPage = 1000
    inital = True
    counter = 0
    
    f = open('output_ac.csv', 'w')

    while (counter < totalPage):
        URL = 'https://www.codechef.com/MINMANH/status/{0}?page={1}sort_by=All&sorting_order=asc&language=44&status=15&handle=&Submit=GO'.format(problem_code, counter)
        r = requests.get(URL)
        soup = bs.BeautifulSoup(r.content, 'html.parser')
        if inital:
            totalPage = int(soup.select_one("div.pageinfo").getText().split()[-1])
            inital = False
        print("Scraping {0} of {1}".format(counter, totalPage))
        for i in range(0, len(soup.select(".tablebox-section.l-float > table > tbody > tr"))):
            t = soup.select(".tablebox-section.l-float > table > tbody > tr")[i].contents[4].getText()
            mem = soup.select(".tablebox-section.l-float > table > tbody > tr")[i].contents[5].getText().split('M')[0]
            solution = soup.select(".tablebox-section.l-float > table > tbody > tr")[i].contents[7].contents[0].contents[0].contents[0].get('href')
            print(t, mem, solution)
            f.write(t + ' ' + mem + ' ' + solution + '\n')
        time.sleep(8)
        counter += 1
    f.close()

if __name__ == '__main__':
    # Dont forget chage the problem code!
    problem_code = 'STRADJ'
    scrape(problem_code)
