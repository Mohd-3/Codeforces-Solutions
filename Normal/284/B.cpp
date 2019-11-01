#include <bits/stdc++.h>
using namespace std;

int A, I, F, n;
string s;
int main() {
	cin >> n >> s;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'A') {
			A++;
		} else if (s[i] == 'I') {
			I++;
		}
	}
	if (I) {
		if (I==1)
			cout << I << endl;
		else
			cout << 0 << endl;
	} else {
		cout << A << endl;
	}
	
	// your code goes here
	return 0;
}