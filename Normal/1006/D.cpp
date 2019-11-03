#include <bits/stdc++.h>
#define endl "\n"
#define add push_back
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, cnt;
string s1, s2;
int main() {
	// your code goes here
	cin >> n >> s1 >> s2;
	for (int i = 0; i < n; ++i) {
		if ((s1[i] == s2[i] && s1[n-i-1] == s2[n-i-1]) ||
			(s1[i] == s2[n-i-1] && s1[n-i-1] == s2[i]) ||
			(s1[i] == s1[n-i-1] && s2[i] == s2[n-i-1]))
			continue;
		cnt++;
	}
	cout << cnt << endl;
	
	
	return 0;
}