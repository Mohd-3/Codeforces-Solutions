#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

int n, M=1e9+7, dp[5001][5001];
char arr[5001];

int solve(int i = 0, int d=1) {
    if (i==n) {
        return 1;
    }
    int& ret = dp[i][d];
    if (~ret) {
        return ret;
    }
    ret = 0;
    if (i==0) {
        return ret = solve(i+1, d);
    }
    if (arr[i-1]=='f') {
        return ret = solve(i+1, d+1);
    }
    return ret = d * solve(i+1, d);
}
int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", arr+i);
    }
    printf("%d\n", solve()); 
    return 0;
}


