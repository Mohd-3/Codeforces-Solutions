#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int cnt;
string s, v;
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (v.empty()) {
            v.add(s[i]);
        } else {
            if (s[i]==v.back()) {
                cnt++;
                v.pop_back();
            } else {
                v.add(s[i]);
            }
        }
    }
    if (cnt&1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}








