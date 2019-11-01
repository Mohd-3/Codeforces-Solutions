#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using ll = long long;
using namespace std;
 
int n, a1, a2, k1, k2;
int main()
{
    IOS
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    int n2 = n;
    int n3 = a1+a2;
    n2 -= (a1*(k1-1));
    n2 -= (a2*(k2-1));
    int cnt =0;
    if (k1 < k2) {
        int can = n / k1;
        cnt += min(can, a1);
        n -= min(can , a1) * k1;
        can = n / k2;
        cnt += min(can, a2);
    } else {
        int can = n / k2;
        cnt += min(can , a2);
        n -= min(can , a2) * k2;
        can = n/k1;
        cnt += min(can , a1);
    }
    cout << max(0, n2) << " " << cnt << endl;
 
    return 0;
}