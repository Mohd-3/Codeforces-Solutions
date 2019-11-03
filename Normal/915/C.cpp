#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2;
int fr[10];
int main() {
    IOS
    cin >> s1 >> s2;
    if (s1.size() < s2.size()) {
        sort(s1.begin(), s1.end());
        reverse(s1.begin(), s1.end());
        cout << s1 << endl;
        return 0;
    }
    for (int i = 0; i < (int) s1.size(); ++i) {
        fr[s1[i]-'0']++;
    }
    bool got = false;
    for (int i = 0; i < (int) s2.size(); ++i) {
        int x = s2[i]-'0';
        if (!got) {
            for (int j = x; ~j; --j) {
                if (fr[j]) {
                    if (j < x) {
                        got = true;
                    }
                    fr[j]--;
                    cout << j;
                    break;
                }
            }
        }
        if (got) {
            break;
        }
    }
    if (got) {
        for (int i = 9; ~i; --i) {
            while (fr[i]-->0) {
                cout << i;
            }
        }
    }


    return 0;
}
