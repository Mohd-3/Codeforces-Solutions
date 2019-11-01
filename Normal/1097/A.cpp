#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s, tmp;
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < 5; ++i) {
        cin >> tmp;
        if (tmp[0]==s[0]||tmp[1]==s[1]) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}


