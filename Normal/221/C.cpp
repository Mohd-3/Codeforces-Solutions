#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001], sorted[100001], cnt;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        sorted[i] = arr[i];
    }
    sort(sorted, sorted+n);
    for (int i = 0; i < n; ++i) {
        if (arr[i] != sorted[i]) {
            cnt++;
        }
        if (cnt>2) {
            puts("NO");
            return 0;
        }
    }
    puts ("YES");

    return 0;
}
