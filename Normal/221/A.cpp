#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[1001];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    iota(arr, arr+n+1, 0);
    for (int i = 2; i<=n; ++i) {

        swap(arr[i], arr[i-1]);
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n]);
    }

    return 0;
}