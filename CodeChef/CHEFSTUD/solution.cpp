#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    string student;
    cin >> student;

    unsigned total_student = student.size(), total_pair_will_be_punished = 0;
    for (unsigned i = 1; i < total_student; i++) 
        if (student[i-1] == '<' && student[i] == '>') total_pair_will_be_punished++;
    cout << total_pair_will_be_punished << '\n';
}