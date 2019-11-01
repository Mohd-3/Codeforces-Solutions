#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 1; i < n; ++i) {
        if (s[i] < s[i-1]) {
            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}