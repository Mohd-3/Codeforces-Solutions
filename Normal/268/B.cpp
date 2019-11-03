#include <bits/stdc++.h>
using namespace std;

int n;
long long dp[2001];
int main() {
	// your code goes here
	cin >> n;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = dp[i-1] + dp[i-2] + i;
	}
	cout << dp[n] << endl;
	
	
	return 0;
}