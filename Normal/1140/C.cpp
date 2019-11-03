#include <bits/stdc++.h>
using namespace std;

int n, k;
long long cnt, cur, cnt2, cur2, mn = 1e18;
pair<long long, long long> arr[100001], arr2[100001];
int main() {
	// your code goes here
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].second >> arr[i].first;
		arr2[i].first = arr[i].second;
		arr2[i].second = arr[i].first;
	}
	sort(arr, arr+n, greater<pair<long long, long long>>());
	sort(arr, arr+n, greater<pair<long long, long long>>());
	for (int i = 0; i < k; ++i) {
		cnt += arr[i].second;
		if (cnt * arr[i].first > cur) {
			cur = cnt * arr[i].first;
		} else {
			break;
		}
	}
	for (int i = 0; i < k; ++i) {
		cnt2 += arr[i].first;
		mn = min(mn, arr[i].second);
		if (cnt2 * mn > cur2) {
			cur2 = cnt2 * mn;
		} else {
			break;
		}
	}
	cout << max(cur, cur2) << endl;
	
	return 0;
}