#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s, t = "abcdefghijklmnopqrstuvwxyz";
int main() {
    IOS
    cin >> s;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i]==s[i-1]) {
            if (i<s.size()-1) {
                for (int j = 0; j < 26; ++j) {
                    if (t[j] != s[i-1] && t[j] != s[i+1]) {
                        s[i] = t[j];
                        break;
                    }
                }

            } else {
                for (int j = 0; j < 26; ++j) {
                    if (t[j] != s[i-1]) {
                        s[i] = t[j];
                        break;
                    }
                }
            }
        }
    }
    cout << s << endl;
    
    return 0;
}



