#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2;
int fr[700];
int main() {
    IOS
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < (int) s1.size(); ++i) {
        if (s1[i]==' ') {
            continue;
        }
        fr[s1[i]]++;
    }
    for (int i = 0; i < (int) s2.size(); ++i) {
        if (s2[i]==' ') {
            continue;
        }
        fr[s2[i]]--;
        if (fr[s2[i]] < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
