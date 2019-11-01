#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
using namespace std;
const int INF = 0x3f3f3f3f;

string s;
int sm, cnt = 1;

int sumDigits(int x) {
	int ret = 0;
	while (x > 0) {
		ret += x%10;
		x /= 10;
	}
	return ret;
}
int main() {

	cin >> s;
	if (s.size()==1) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < s.size(); ++i) {
		sm += s[i]-'0';
	}
	while (sm > 9) {
		sm = sumDigits(sm);
		cnt++;
	}
	cout << cnt << endl;

	return 0;
}
