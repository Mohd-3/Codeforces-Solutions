#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t;
ll n, k, cnt;
int main()
{
    IOS
    //bfreopen("balalance.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> k;
                cnt = 0;
       
        while (n) {
            if (n%k==0) {
                n/=k;
                cnt++;
            } else {
                cnt += n%k;
                n -= n%k;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}
