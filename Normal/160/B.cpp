#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n;
string s;
multiset<int> a, b;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        a.insert(s[i]-'0');
        b.insert(s[i]-'0');
    } 
    
    vector<int> v;
    for (int i = n; i < n<<1; ++i) {
        v.emplace_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    bool ok1 = true, ok2 = true;
    for (int i = 0; i < (int) v.size(); ++i) {
        if (*a.begin() >= v[i]) {
            ok1 = false;
        } else {
            a.erase(a.begin());
        }
        auto it = b.upper_bound(v[i]);
        if (it == b.end()) {
            ok2 = false;
        } else {
            b.erase(it);
        }
    }
    if (ok1 || ok2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


