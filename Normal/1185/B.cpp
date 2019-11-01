#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t;
string s1, s2;

string solve() {
    int i = 1, j = 1;
    if (s1[0] != s2[0]) {
        return "NO";
    }
    while (j < s2.size() && i < s1.size()) {
        if (s1[i]==s2[j]) {
            i++;
            j++;
        } else {
            while (s1[i]==s1[i-1] && i < s1.size()) {
                i++;
            }
            if (s1[i] != s2[j]) {
                return "NO";
            }
        }
    }
    if (j == s2.size()) {
        while (i < s1.size()) {
            if (s1[i] != s1[i-1]) {
                return "NO";
            }
            i++;
        }
        return "YES";
    }
    return "NO";
}
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> s2 >> s1;
        cout << solve() << endl;

    }

    return 0;
}
