#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
using namespace std;
const int INF = 0x3f3f3f3f;

int n, freeTime, arr[100001];

bool ok(int x) {
	for (int i = x; i <= n; ++i) {
		if (arr[i] - arr[i-x] <= freeTime) {
			return true;
		}
	}
	return false;
}
int main() {

	IOS
	/*
	cin >> n >> freeTime;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int mx = 0, sm = 0, cnt = 0;
	int i = 0;
	for (int j = 0; j < n; ++j) {
		sm += arr[j];
		cnt++;
		while (sm > freeTime) {
			sm -= arr[i];
			cnt--;
			i++;
		}
		mx = max(mx, cnt);
	}
	cout << mx << endl;
	*/

	cin >> n >> freeTime;
	for  (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		arr[i] += arr[i-1];
	}
	int lo = 0, hi = n, mid;
	while (lo < hi) {
		mid = lo+((hi-lo+1)>>1);
		if (ok(mid)) {
			lo = mid;
		} else {
			hi = mid-1;
		}
	}
	cout << lo << endl;




}
