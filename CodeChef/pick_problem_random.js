// Run this on Console
problem = document.querySelectorAll('#primary-content > div > div.content-spacer > div:nth-child(3) > div:nth-child(3) > table > tbody > tr > td:nth-child(1) > div.problemname > a');done = document.querySelectorAll('#primary-content > div > div.content-spacer > div:nth-child(3) > div:nth-child(3) > table > tbody > tr > td > div.problemname > img');pick = problem[Math.floor(Math.random()*problem.length)];while(pick.parentElement.childElementCount != 1) pick = problem[Math.floor(Math.random()*problem.length)];pick.click()