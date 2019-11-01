#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, n;
string s;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int a = 0, b = 0;
        if (n==2) {
            if (s[0]>=s[1]) {
                cout << "NO\n";
            } else {
                cout << "YES\n" << 2 << endl;
                cout << s[0] << " " << s[1] << endl;
            }
        } else {
            cout << "YES\n" << 2 << endl;
            cout << s[0] << " ";
            for (int i = 1; i < n; ++i) {
                cout << s[i];
            }
            cout << endl;
        }
        
    }
    
    return 0;
}









