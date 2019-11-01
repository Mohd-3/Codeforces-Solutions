#include <bits/stdc++.h>
using namespace std;

int n;
long long cnt, ans, tmp;
int main() {
	// your code goes here
	cnt = 0;
	cin >> n;
	while (n--) {
		cin >> tmp;
		if (tmp==-1) {
			if (cnt) {
				cnt--;
			} else {
				ans++;
			}
		} else {
			cnt += tmp;
		}
	}
	cout << ans << endl;
	return 0;
}