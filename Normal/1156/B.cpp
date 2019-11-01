#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t;
string s, s2, a, b;

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> s;
        a = "";
        b = "";
        for (int i = 0; i < s.size(); ++i) {
            if ((s[i]-'a')%2) {
                a.push_back(s[i]);
            } else {
                b.push_back(s[i]);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        s = b+a;
        s2 = a+b;
        int good = 1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i]==s[i-1]+1 || s[i]==s[i-1]-1) {
                good = 0;
                break;
            }
        }
        int good2 = 1;
        for (int i = 1; i < s2.size(); ++i) {
            if (s2[i]==s2[i-1]+1 || s2[i]==s2[i-1]-1) {
                good2 = 0;
                break;
            }
        }
        if (good) {
            cout << s << endl;
        } else if (good2) {
            cout << s2 << endl;
        } else {
            cout << "No answer" << endl;
        }
    }

    return 0;
}
