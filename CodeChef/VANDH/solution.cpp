#include <iostream>
#include <cmath>

using namespace std;

void solve(unsigned hills, unsigned valley) {
    unsigned short stringLength = hills+valley + 3;
    
    // Odd for Valley. Even for Hills
    unsigned short who;

    if (hills > valley) {
        who = 1; // Valley first
        if (hills - valley > 1) {
            if (hills%2 == 0) stringLength += hills/2 * 2;
            else if (hills%2 != 0 && valley%2 == 0) stringLength += (((float) hills/2) * 2) - 1; 
            else stringLength += (valley/2) * 2;
        }
		valley++;
    }
    else {
        who = 2;  // Hills First
        if (valley - hills > 1) {
            if (valley%2 == 0) stringLength += valley/2 * 2;
            else if (valley%2 != 0 && hills%2 == 0) stringLength += (((float) valley/2) * 2) - 1; 
            else stringLength += (hills/2) * 2;
        }
		hills++;
    }

    string binaryString;
	stringLength = 0;
    while (hills > 0 || valley > 0) {
        if (who%2 == 0) {
            binaryString.push_back('1');
            if (hills != 0) hills--;
			else {
				binaryString.push_back('1');
				stringLength++;
			}
            who = 1;
        }
        else {
            binaryString.push_back('0');
            if (valley != 0) valley--;
			else {
				binaryString.push_back('0');
				stringLength++;
			}
            who = 2;
        }

		stringLength++;
    }

	if (who == 2) binaryString.push_back('1'); 
	else binaryString.push_back('0');

	cout << stringLength+1 << '\n' << binaryString << '\n';
}

int main() {
    unsigned short testCase;
    cin >> testCase;

    unsigned short hills, valley;
    while (testCase--) {
        cin >> hills >> valley;
        solve(hills, valley);
    }

    return 0;
}