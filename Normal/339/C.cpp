#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
vector<int> v, ans;
int m;

bool check(int i = 0, int a = 0, int lst = 0) {
    if (i==m) {
        return 1;
    }
    for (int x : v) {
        if (x != lst) {
            if (i&1 && a+x > 0) {
                ans.add(x);
                if (check(i+1, a+x, x)) {
                    return 1;
                }
                ans.pop_back();
            } else if (!(i&1) && a-x < 0) {
                ans.add(x);
                if (check(i+1, a-x, x)) {
                    return 1;
                }
                ans.pop_back();
            }
        }
    }
    return 0;
}
int main() {
    IOS
    cin >> s >> m;
    for (int i = 1; i <= 10; ++i) {
        if (s[i-1]=='1') {
            v.add(i);
        }
    }
    if (check()) {
        cout << "YES\n";
        for (int x : ans) {
            cout << x << " ";
        }
    } else {
        cout << "NO\n";
    }
    
    return 0;
}





