#include <bits/stdc++.h>
using namespace std;

int n, tmp, e, o;
priority_queue<int> odd, even;
long long cnt;
int main() {
	// your code goes here
	cin >> n;
	while (n--) {
		cin >> tmp;
		if (tmp&1) {
			odd.push(tmp);
			o++;
		} else {
			even.push(tmp);
			e++;
		}
	}
	if (o == e) {
		cout << 0 << endl;
		return 0;
	}
	if (o > e) {
		odd.pop();
	} else {
		even.pop();
	}
	while (!even.empty() && !odd.empty()) {
		even.pop();
		odd.pop();
	}
	while (!even.empty()) {
		cnt += even.top();
		even.pop();
	}
	while (!odd.empty()) {
		cnt += odd.top();
		odd.pop();
	}
	cout << cnt << endl;
	return 0;
}