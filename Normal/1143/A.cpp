#include <bits/stdc++.h>
using namespace std;

int n, a, b, tmp;
int main() {
	// your code goes here
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		if (tmp) {
			a = i;
		} else {
			b = i;
		}
	}
	cout << min(a, b) << endl;
	return 0;
}