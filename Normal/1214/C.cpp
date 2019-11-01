#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
const double PI = acos(-1);
const int N = 2e5+1;
 
int n, o, c;
string s, a, b;
int main() {
    //freopen("lazy.in", "r", stdin);
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='(') {
            a.push_back('(');
        } else {
            if (a.empty()) {
                b.push_back(')');
            } else {
                a.pop_back();
            }
        }
    }
    if ((a.empty() && b.empty()) || (a=="(" && b == ")")) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
 
 
}