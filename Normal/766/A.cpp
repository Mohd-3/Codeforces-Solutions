#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s1, s2;
int main() {
    IOS
    cin >> s1 >> s2;
    if (s1==s2) {
        cout << -1 << endl;
        return 0;
    }
    cout << max(s1.size(), s2.size()) << endl;
    return 0;
}

