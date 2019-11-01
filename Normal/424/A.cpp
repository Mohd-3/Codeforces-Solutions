#include <bits/stdc++.h>
using namespace std;

int n, X, x;
string s;
int main() {
	// your code goes here
	cin >> n >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'X') {
			X++;
		} else {
			x++;
		}
	}
	if (X > x) {
		cout << ((X-x)>>1) << endl;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i]=='X') {
				if (x!=X) {
					cout << 'x';
					x++;
					X--;
				} else {
					cout << s[i];
				}
			} else {
				cout << s[i];
			}
		}
	} else if (x > X) {
		cout << ((x-X)>>1) << endl;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i]=='x') {
				if (x!=X) {
					cout << 'X';
					x--;
					X++;
				} else {
					cout << s[i];
				}
			} else {
				cout << s[i];
			}
		}
	} else {
		cout << 0 << endl;
		cout << s << endl;
	}
	
	return 0;
}