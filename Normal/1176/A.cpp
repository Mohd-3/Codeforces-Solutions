#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t;
ll n, cnt;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0;
        if (n==1) {
            cout << 0 << endl;
            continue;
        }
        while (n%5==0) {
            n <<= 2;
            n /= 5;
            cnt++;
        }
         while (n%3==0) {
            n <<= 1;
            n /= 3;
            cnt++;
        }
        while (n%2==0) {
            n >>= 1;
            cnt++;
        }


  
        cout << (n == 1 ? cnt : -1) << endl;
    }


    return 0;
}
