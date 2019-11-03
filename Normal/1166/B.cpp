    #include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
string s = "aoeiu";
int main()
{
    IOS
    cin >> n;
    if (n&1) {
        cout << -1 << endl;
        return 0;
    }
    int m = sqrt(n);
    int need = n-25, pos = 0, idx=0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if (need && pos == i) {
                cout << 'a';
                pos++;
                if (pos==5) {
                    pos=0;
                }
                need--;
            } else {
                cout << s[idx++];
                if (idx==5) {
                    idx =0 ;
                }
            }
        }
        s = s.substr(1) + s[0];


    }


    return 0;
}
