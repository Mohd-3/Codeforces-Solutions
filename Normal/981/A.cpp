#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

string s1, s2;
int n, fr[26];
int main() {
    IOS;
    cin >> s1;
    s2 = s1;
    n = s1.size();
    reverse(s2.begin(), s2.end());
    if (s1 != s2) {
        cout << n << endl;
    } else {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (!fr[s1[i]-'a']) {
                cnt++;
            }
            fr[s1[i]-'a']++;
        }
        if (cnt == 1) {
            cout << 0 << endl;
        } else {
            cout << n-1 << endl;
        }
    }

    return 0;
}

