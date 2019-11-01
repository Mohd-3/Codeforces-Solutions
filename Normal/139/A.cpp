#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, arr[7], sm;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
        sm += arr[i];
    }
    n %= sm;
    if (n==0) {
        n = sm;
    }
    for (int i = 0; i < 7; ++i) {
        n -= arr[i];
        if (n <= 0) {
            printf("%d\n", i+1);
            return 0;
        }
    }
    return 0;
}