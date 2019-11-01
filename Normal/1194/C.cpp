#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int T;
string s, t, p;
int main() {
    IOS
    cin >> T;
    while (T--) {
        cin >> s >> t >> p;
        if (s.size() > t.size() || (s.size() == t.size() && s != t)) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> fr1(26), fr2(26), fr3(26);
        for (int i = 0; i < s.size(); ++i) {
            fr1[s[i]-'a']++;
        }
        for (int i = 0; i < t.size(); ++i) {
            fr2[t[i]-'a']++;
        }
        bool good = true;
        for (int i = 0; i < 26; ++i) {
            if (fr1[i]>fr2[i]) {
                cout << "NO" << endl;
                good = false;
                break;
            }
        }
        if (!good) {
            continue;
        }
        for (int i = 0; i < p.size(); ++i) {
            fr3[p[i]-'a']++;
        }
 
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] != t[j]) {
                if (!fr3[t[j]-'a']) {
                    good = false;
                    break;
                } else {
                    fr3[t[j]-'a']--;
                    j++;
                }
            } else {
                i++;
                j++;
            }
 
        }
        if (i < s.size() && j == t.size()) {
            good = false;
        }
        if (!good) {
            cout << "NO" << endl;
            continue;
        }
        while (j < t.size()) {
            if (!fr3[t[j]-'a']) {
                good = false;
                break;
            } else {
                fr3[t[j]-'a']--;
                j++;
            }
        }
        if (!good) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
 
 
    }
    return 0;
}