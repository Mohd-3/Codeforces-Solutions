#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[100001], cnt;
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    sort(arr, arr+n, [](const int& a, const int& b) {
         return b%10 < a%10;
         });
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 100) {
            continue;
        }
        int x = min(k, 10-(arr[i]%10));
        arr[i] += x;
        k-= x;
    }
    k /= 10;
    for (int i = 0; i < n; ++i) {
        if (!k) {
            break;
        }
        if (arr[i]>=100) {
            continue;
        }
        int x = min(k*10, 100-arr[i]);
        arr[i] += x;
        k-= x/10;
    }
    for (int i = 0; i < n; ++i) {
        cnt += arr[i]/10;
    }


    printf("%d\n", cnt);


    return 0;
}
