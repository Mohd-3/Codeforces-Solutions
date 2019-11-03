#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int a1, b1, a2, b2, a3, b3, am, bm;
set<pair<int, int>> se;
int main() {
    IOS
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    am = (a1+a2+a3)/3;
    bm = (b1+b2+b3)/3;
    vector<pair<int, int>> v{{a1, b1}, {a2, b2}, {a3, b3}};
    for (auto p : v) {
        int i = min(p.first, am), j = min(p.second, bm);
        while (i <= max(p.first, am)) {
            se.insert({i++, j});
        }
        i = max(p.first, am);
        while (j <= max(p.second, bm)) {
            se.insert({i, j++});
        }
    }
    cout << se.size() << endl;
    for (auto p : se) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}

