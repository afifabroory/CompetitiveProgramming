// Best submission before https://www.hackerearth.com/submission/46034144/

#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int main() {
    unsigned short int n;
    cin >> n;

    string title; char first_char;
    map<char, unsigned short int> book_title;
    
    while (n--) {
	cin >> title;
	first_char = title[0];

        // When key doesn't exists in map
        if (book_title.find(first_char) == book_title.end()) {
            book_title[first_char] = 1;
            continue;
        }

        book_title[first_char] += 1;
    }

    unsigned short int total_shelf = 0;
    for (map<char, unsigned short int>::iterator it = book_title.begin(); it != book_title.end(); it++) {
        total_shelf += ceil((float) it->second/10);
    }

    cout << total_shelf << "\n";
}
