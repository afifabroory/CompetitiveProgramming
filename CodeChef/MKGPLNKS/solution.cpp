#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void generate_pair(vector<pair<char, unsigned>> &dataPlanks, string s, unsigned n) {
    unsigned cnt = 1;
    char curr = s[0];
    
    for (int i = 1; i <= n; i++) {
        if (curr != s[i]) {
            pair<char, unsigned> e = make_pair(curr, cnt);
            dataPlanks.push_back(e);
            curr = s[i]; cnt = 0;
        }
        cnt++;
    }
}  


void solve(vector<pair<char, unsigned>> dataPlanks) {
    unsigned cnt1 = 0, cnt2 = 0;

    vector<pair<char, unsigned>>::iterator it;
    for (it = dataPlanks.begin(); it != dataPlanks.end(); it++) {
        if ('W' != it->first) cnt1++;
        if ('B' != it->first) cnt2++;
    }

    cout << (cnt1 > cnt2 ? cnt2 : cnt1) << '\n';
}

int main() {
    unsigned t, n;
    string s;

    cin >> t;
    while (t--) {
        cin >> n; cin >> s;
        
        vector<pair<char, unsigned>> dataPlanks;
        generate_pair(dataPlanks, s, n);
        solve(dataPlanks);
    }

    return 0;
}