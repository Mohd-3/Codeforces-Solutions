#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[101], dp[102][4];


int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
         if (arr[i-1] == 2 || arr[i-1] == 3) {
            dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + 1;
        }
        if (arr[i-1] == 1 || arr[i-1] == 3) {
            dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + 1;
        }

    }

    cout << n-max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
    return 0;
}
