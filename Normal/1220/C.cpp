#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n;
string s;
char c;
int main() {
    IOS
    cin >> s;
    n = s.size();
    c = s[0];
    for (int i = 0; i < n; ++i) {
        if (c < s[i]) {
            cout << "Ann" << endl;
        } else {
            cout << "Mike" << endl;
        }
        c = min(c, s[i]);
    }
    
    return 0;
}




