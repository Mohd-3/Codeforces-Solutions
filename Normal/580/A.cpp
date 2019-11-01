#include <bits/stdc++.h>
using namespace std;

int n, mx, arr[100001], dp[100001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if (i== 0) {
            dp[i] = 1;
        } else if (arr[i] >= arr[i-1]) {
            dp[i] = dp[i-1]+1;
        } else {
            dp[i] = 1;
        }
        mx = max(mx, dp[i]);
    } 
    printf("%d\n", mx);
    return 0;
}

