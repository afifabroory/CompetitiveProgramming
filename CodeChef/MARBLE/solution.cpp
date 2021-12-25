#include <bits/stdc++.h>
using namespace std;

bool isVowel(char charStr) {
	return charStr == 'a' or charStr == 'i' or charStr == 'u' or charStr == 'e' or charStr == 'o';
}

void replaceQMark(string &str, char alpha, unsigned length) {
	for (int i = 0; i < length; i++) {
		if (str[i] == '?') str[i] = alpha;
	}
}

/*void pickAlpha(string s, string p, unsigned int length) {
	unsigned int cons = 0, vowel = 0;
	
	// Format:
	// total_vowel, total_cons, total_qmark
	unsigned decission_s[] = {0, 0, 0};
	unsigned decission_p[] = {0, 0, 0};
	unsigned sameQMarkTotal = 0;

	// Format:
	// (index, char)
	vector<pair<unsigned, unsigned>> diffQMark_s;
	vector<pair<unsigned, unsigned>> diffQMark_p;

	for (int i = 0; i < length; i++) {
		if (isVowel[s[i]]) decission_s[0]++;
		else {
			if (s[i] != '?') decission_s[1]++;
			else if (p[i] != '?') {
				decission_s[2]++;
				diffQMark_s.push_back(make_pair(i, p[i]));
			}
		}

		if (isVowel[p[i]]) decission_p[0]++;
		else {
			if (p[i] != '?') decission_p[1]++;
			else if (s[i] != '?') {
				decission_p[2]++;		
				diffQMark_p.push_back(make_pair(i, s[i]));
			}
		}

		if (s[i] == p[i] && s[i] == '?') sameQMarkTotal++;
	}

	// Let's make decission
	map<char, unsigned>  possibleOption;
	for (int i = 0; i < diffQMark_s.size(); i++) {
		if (isVowel(diffQMark_s[i]->second) && sameQMarkTotal == 0) cons++;
		else if (sameQMarkTotal == 0) vowel++;
		
		if (isVowel(diffQMark_s[i]->second) && sameQMarkTotal != 0) {
			possibleOption[diffQMark_s[i]->second]++;
			vowel++;
		}
        else if (sameQMarkTotal != 0) {
			possibleOption[diffQMark_s[i]->second]++;
			cons++;	
		}
	}
	
	//return (possibleOption.rbegin())->first;
}*/

char pickAlpha(string s, string p, unsigned length) {
	unsigned vowels = 0, consonant = 0;
	for (int i = 0; i < length; i++) {	
		if (p[i] == '?' and p[i] != s[i]) {
			return s[i];
		}

		if (s[i] == '?' and s[i] != p[i]) {
			if (isVowel(p[i])) consonant++;
			else vowels++;
		}	
	}

	if (vowels > consonant) return 'a';
	else return 'b';
}

bool sortFn(char a, char b) { return (a < b); }
bool sortFn2(char a, char b) { return (a > b); }

unsigned getIndex(string str, unsigned length) {
	for (int i = 0; i < length; i++) {
		if (str[i] == '?') return i;
	}
}

void solve(string s, string p, unsigned n) {
	unsigned ans = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == p[i]) continue;
		else if (isVowel(s[i]) && isVowel(p[i])) ans += 2;
		else if (!isVowel(s[i]) && !isVowel(p[i])) ans += 2;
		else ans += 1;
	}

	cout << ans << '\n';
}

int main() {
	unsigned short t;
	cin >> t;

	unsigned int n;
	string s, p;
	char alpha;
	while (t--) {
		cin >> n >> s >> p;
		
		sort(s.begin(), s.end(), sortFn2);
		sort(s.begin(), s.begin()+(getIndex(s, n)));

		sort(p.begin(), p.end(), sortFn2);
		sort(p.begin(), p.begin()+(getIndex(p, n)));
	
		alpha = pickAlpha(s, p, n);
		replaceQMark(s, alpha, n); 	
		replaceQMark(p, alpha, n);

		solve(s, p, n);
	}
}
