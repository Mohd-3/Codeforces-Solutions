#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int t;
ll n, cnt;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0;
        int ans = 0;
        while (n>4) {
            if (n&1) {
                if (cnt&1) {
                    ans = 2;
                } else {
                    ans = 1;
                }
                break;
            }
            n>>=1;
            cnt++;
        }
        if (ans == 1) {
            cout << "First Box" << endl;
            continue;
        }
        if (ans == 2) {
            cout << "Second Box" << endl;
            continue;
        }
        if (n == 3 || n == 4) {
            if (cnt&1) {
                cout << "Second Box" << endl;
            } else {
                cout << "First Box" << endl;
            }
        } else if (n == 2) {
            cout << "Second Box" << endl;
        } else {
            cout << "First Box" << endl;
        }
    } 
    return 0;
}
   