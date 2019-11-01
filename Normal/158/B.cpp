#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, cnt, arr[100001];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    sort(arr, arr+n);
    int i = 0, j = n-1;
    while (i <= j) {
        int cur = arr[j--];
        while (arr[i]+cur <= 4) {
            cur += arr[i++];
        }
        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
