#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, a, b, d, mn = 1e9, mn2 = 1e9;
int main() {
    scanf("%d", &n);
    vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v1[i]);
        mn = min(mn, v1[i]);
    }
    scanf("%d", &m);
    vector<int> v2(m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &v2[i]);
        mn2 = min(mn2, v2[i]);
    }
    if (mn <= mn2) {
        printf("%d:%d\n", n<<1, m<<1);
        return 0;
    }
    a = 3 * n;
    for (int x : v2) {
        if (x < mn) {
            b += 2;
        } else {
            b += 3;
        }
    }
    if (b > a) {
        
    }
    printf("%d:%d\n", a, b);
    return 0;
}
