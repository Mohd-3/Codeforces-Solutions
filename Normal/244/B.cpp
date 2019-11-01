#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n;
set<ll> se;
void gen(int i, int j, ll sm) {
    if (sm > n) {
        return;
    }
    ll a = sm*10+i;
    ll b = sm*10+j;
    if (a > 0 && a <= n) {
        se.insert(a);
        gen(i, j, a);
    }
    if (b > 0 && b <= n) {
        se.insert(b);
        gen(i, j, b);
    }
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < 10; ++i) {
        for (int j = i+1; j < 10; ++j) {
            gen(i, j, 0);
        }
    }
    cout << se.size() << endl;
    return 0;
}




