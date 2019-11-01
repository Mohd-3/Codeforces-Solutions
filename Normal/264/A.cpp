#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n;
string s;
vector<int> a, b;
int main() {
    IOS
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i]=='l') {
            b.emplace_back(i+1);
        } else {
            a.emplace_back(i+1);
        }
    }
    for (int i = 0; i < (int) a.size(); ++i) {
        cout << a[i] << endl;
    }
    for (int i = b.size()-1; ~i; --i) {
        cout << b[i] << endl;
    }
    return 0;
}





