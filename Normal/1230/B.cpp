#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, k;
string s;
int main() {
    IOS
    cin >> n >> k >> s;
    if (n == 1) {
        cout << (k ? "0" : s) << endl;
        return 0;
    } 
    for (int i = 0; i < n; ++i) {
        if (!k) {
            break;
        }
        if (i == 0) {
            if (s[i]>'1') {
                s[i]='1';
                k--;
            }
        } else {
            if (s[i] > '0') {
                s[i] = '0';
                k--;
            }
        }
    }
    cout << s << endl;
 
    return 0;
}
 