#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;

bool isLucky(int x) {
	while (x) {
		if (x%10 != 7 && x%10 != 4)
			return 0;
		x/=10;
	}
	return 1;
}
int n;
int main() {
	IOS;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (isLucky(i) && n%i==0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}
