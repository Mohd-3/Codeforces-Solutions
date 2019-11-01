#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a, g, c, t, q, mx, need;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='A') {
            a++;
        } else if (s[i]=='G') {
            g++;
        } else if (s[i]=='C') {
            c++;
        } else if (s[i]=='T') {
            t++;
        } else {
            q++;
        }
    }
    if (q==s.size()) {
        if (q%4==0) {
            for (int i = 0; i < q/4; ++i) {
                cout << "ACGT";
            }
            cout << endl;
        } else {
            cout << "===" << endl;
        }
        return 0;

    }
    mx = max(a, max(g, max(c, t)));
    need += mx-a + mx-c + mx-g + mx-t;
    if (need < q) {
        if ((q-need)%4) {
            cout << "===" << endl;
            return 0;
        }
        for (int i = 0; i < (q-need)/4; ++i) {
            mx++;
        }
    }
    if (need > q) {
        cout << "===" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='?') {
            if (a<mx) {
                cout << 'A';
                a++;
            } else if (c<mx) {
                cout << 'C';
                c++;
            } else if (g<mx) {
                cout << 'G';
                g++;
            } else if (t<mx) {
                cout << 'T';
                t++;
            }
        } else {
            cout << s[i];
        }
    }
    cout << endl;

    
    return 0;
}










