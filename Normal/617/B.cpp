#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, d;
ll cnt = 0;
int main() {
    IOS
    cin >> n;
    int cur = 1;
    int one = 0;
    for (int i =0; i < n; ++i) {
        cin >> d;
        if (d) {
            if (one) {
                cnt *= cur;
                cur = 1;
            } else {
                one = 1;
                cnt = 1;
            }
        } else {
            if (one) {
                cur++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}