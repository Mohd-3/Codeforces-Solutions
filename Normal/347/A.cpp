#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, arr[101];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n ; ++i) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    swap(arr[0], arr[n-1]);
    for (int i = 0; i < n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n-1]);
    }
    return 0;
}


