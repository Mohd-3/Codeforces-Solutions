#include <bits/stdc++.h>
using namespace std;

int n, t, cnt, cnt2;
string s;
int main() {
	// your code goes here
	cin >> t;
	while (t--) {
		cin >> n >> s;
		cnt = 0;
		cnt2 = 0;
		if (s[0] == '<' and s[n-1] == '>') {
			for (int i = 0; i < n; ++i) {
				if (s[i] == '>') {
					break;
				}
				cnt++;
			}
			for (int i = n-1; ~i; --i) {
				if (s[i] == '<') {
					break;
				}
				cnt2++;
			}
			cout << min(cnt, cnt2) << endl;
		} else {
			cout << 0 << endl;
		}
	}
	
	
	return 0;
}