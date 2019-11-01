#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, l, r, tot, sk;
int main() {
    IOS
    cin >> n >> k >> l >> r >> tot >> sk;
    int first = sk / k;
    int md = sk%k;
    int k2 = k;
    while (md>0) {
        int tmp = min(r-first, md);
        cout << first + tmp << " ";
        md -= tmp;
        tot -= first;
        tot -= tmp;
        k--;
    }
    while (k-- > 0) {
        cout << first << " ";
        tot -= first;
    }
    n-= k2;
    if (!n) {
        return 0;
    }
    int first2 = tot/n;
    int second2 = tot%n;
    while (n--) {
        cout << first2 + (second2 > 0 ? 1 : 0) << " ";
        second2--;
    }
    cout << endl;



    return 0;
}
