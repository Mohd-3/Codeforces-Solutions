#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, s, arr[1000001];
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> s;
        memset(arr, 0, sizeof arr);
        int sm = 0;
        int i = 0, j = n-1;
        int odd = 0, mid = -1;
        if (n&1) {
            odd = 1;
            mid = n>>1;
        }
        while (sm < s && i <= j) {
            while (sm + 2 <= s && arr[i]<9) {
                arr[i]++;
                sm++;
                if (j != mid) {
                    arr[j]++;
                    sm++;
                }
            }
            if (i == mid) {
                while (sm+1 <= s && arr[i]<9) {
                    sm++;
                    arr[i]++;
                 }
            }
            i++;
            j--;
        }
         if (sm == s) {
            for (int i = 0; i < n; ++i) {
                cout << arr[i];
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
      }
    return 0;
}