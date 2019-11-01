#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k;
char s[500001];
int main() {
    scanf("%d%d%s", &n, &k, s);
    vector<vector<int>> dp(n+1, vector<int>(k, 1e9));
    for (int i = 0; i < k; ++i) {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < k; ++j) {
            int cur = s[i-1]-'A';
            for (int l = 0; l < k; ++l) {
                if (l != j) {
                    dp[i][j] = min(dp[i][j], dp[i-1][l] + (j != cur));
                }
            }
        }
    }
    int mn = 1e9, idx;
    for (int i = 0; i < k; ++i) {
        if (dp[n][i] < mn) {
            mn = dp[n][i];
            idx = i;
        }
    }
    string ans = "";
    ans.push_back(char(idx+'A'));
    int j = n-1, lst = idx;
    while (~j) {
        for (int i = 0; i < k; ++i) {
            if (i != idx && dp[j][i] == dp[j+1][idx] - (s[j] != char(idx+'A'))) {
                ans.push_back(char(i+'A'));
                idx = i;
                break;
            }
        }
        j--;
    }
    printf("%d\n", mn);
    for (int i = n-1; ~i; --i) {
        printf("%c", ans[i]);
    }
    return 0;
}