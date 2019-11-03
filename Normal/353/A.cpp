#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
using namespace std;
const int INF = 0x3f3f3f3f;

int n, up[101], down[101], u, d;

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> up[i] >> down[i];
		u += up[i];
		d += down[i];
	}
	if (u%2==0 && d%2==0) {
		cout << 0 << endl;
	} else if (u%2 != d%2) {
		cout << -1 << endl;
	} else {
		bool found = 0;
		for (int i = 0; i < n; ++i) {
			if (up[i]%2 != down[i]%2) {
				found = 1;
				break;
			}
		}
		if (found) {
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}
	}



	return 0;
}
