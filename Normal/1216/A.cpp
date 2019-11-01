#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
string s;
int n, cnt;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 1; i < n; i+=2) {
        if (s[i] == s[i-1]) {
            if (s[i] == 'a') {
                s[i-1] = 'b';
            } else {
                s[i-1] = 'a';
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    cout << s << endl;
    return 0;
}
 