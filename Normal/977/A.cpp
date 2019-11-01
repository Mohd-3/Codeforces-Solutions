#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll n;
int k;
int main()
{
    IOS
    cin >> n >> k;
    while (k--) {
        if (n%10) {
            n--;
        } else {
            n/= 10;
        }
    }
    cout << n << endl;
    return 0;
}
