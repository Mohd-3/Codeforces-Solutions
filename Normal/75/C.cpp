#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int a, b;
set<int> se;
set<int, greater<int>> ans;
int main() {
    IOS
    cin >> a >> b;
    for (ll i = 1; i*i <= a; ++i) {
        if (a%i==0) {
            se.insert(i);
            if (a/i != i) {
                se.insert(a/i);
            }
        }
    }
    for (ll i = 1; i*i <= b; ++i) {
        if (b%i == 0) {
            if (se.find(i) != se.end()) {
                ans.insert(i);
            }
            if (b/i != i && se.find(b/i) != se.end()) {
                ans.insert(b/i);
            }
        }
    }
    int q;
    cin >> q;
    while (q--) {
        cin >> a >> b;
        auto it = ans.lower_bound(b);
        if (it == ans.end() || *it < a) {
            cout << -1 << endl;
        } else {
            cout << *it << endl;
        }
    }
    return 0;
}