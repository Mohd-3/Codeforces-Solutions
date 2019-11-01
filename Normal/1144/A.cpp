#include <bits/stdc++.h>
using namespace std;
 
int n;
string s;
int main() {
	// your code goes here
	cin >> n;
	while (n--) {
		int ch = 0;
		cin >> s;
		sort(s.begin(), s.end());
		for (int i = 1; i < s.size(); ++i) {
			if (s[i] != s[i-1]+1) {
				ch = 1;
				break;
			}
		}
		if (ch) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}
	return 0;
}