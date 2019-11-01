#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
using namespace std;
using ll = long long;
#include <ext/rope>
using namespace __gnu_cxx;
 string s, tmp, o;
int pos, en;
int main() {
    IOS
    cin >> s;
    rope<char> v;
    for (int i = 0; i < (int) s.size(); ++i) {
        v.push_back(s[i]);
    }
    cin >> o;
    while (o != "END") {
        if (o == "I") {
            cin >> s >> pos;
            rope<char> tt;
            for (int i = 0; i < (int) s.size(); ++i) {
                tt.push_back(s[i]);
            }
            v.insert(pos, tt); 
        } else {
            cin >> pos >> en;
            cout << v.substr(pos, en-pos+1) << endl;
         }
        cin >> o;
    }
     return 0;
}
 