#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, a, b, arr[1001];
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        int cur = 1;
        if (s[i]=='1') {
            arr[0]++;
            cur = -1;
        }
        cin >> a >> b;
        while (b < 1001) {
            arr[b] += cur;
            cur *= -1;
            b += a;
        }
    }
    int mx = 0;
    for (int i = 1; i < 1001; ++i) {
        arr[i] += arr[i-1];
    }
    for (int i = 0; i < 1001; ++i) {
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
 
    return 0;
}