#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
using namespace std;
const int INF = 0x3f3f3f3f;

int n, m, mn, mx;
int main() {

	IOS
	cin >> n >> m;
	mn = n/2 + n%2;
	mx = n;
	while (mn<=mx) {
		if (mn%m==0 ) {
			break;
		}
		mn++;
	}
	if (mn <= mx && mn%m==0) {
		cout << mn << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
