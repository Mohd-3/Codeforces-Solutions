#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
const int INF = 0x3f3f3f3f;

int t, fr[26];
string s1, s2;

int main() {
    IOS;
    cin >> t;
    while (t--) {
        memset(fr, 0, sizeof fr);
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 != s2) {
            cout << s1 << endl;
        } else {
            if (s1.size() == 1) {
                cout << -1 << endl;
            } else {
                for (int i = 0; i < s1.size(); ++i) {
                    fr[s1[i]-'a']++;
                }
                int x = 0;
                for (int i = 0; i < 26; ++i)
                    if (fr[i])
                        x++;
                if (x==1) {
                    cout << -1 << endl;
                } else {
                    int idx1=0, idx2 = 0;
                    for (int i = 0; i < s1.size(); ++i) {
                        bool xx = false;
                        for (int j = i+1; j < s1.size(); ++j) {
                            if (s1[i] != s1[j]) {
                                swap(s1[i], s1[j]);
                                xx = 1;
                                break;
                            }
                        }
                        if (xx)
                            break;
                    }
                    cout << s1 << endl; 
                }
            }
        }
    }

    return 0;
}

