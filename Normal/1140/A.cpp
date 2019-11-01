#include <bits/stdc++.h>
using namespace std;
 
int n, mx, cnt, tmp;
int main() {
	// your code goes here
	cin >> n;
	mx = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		mx = max(mx, tmp);
		if (mx > i) {
			continue;
		}
		cnt++;
	}
	cout << cnt << endl;
 
	return 0;
}