#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[51];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    int cnt = count_if(arr, arr+n, [](const int x) {
                                        if (x==0) {
                        return false;
                       }
                                       return x >= arr[k-1];});
    printf("%d\n", cnt);
    return 0;
}
