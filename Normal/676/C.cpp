#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k;
string s;
int main() {
    IOS
    cin >> n >> k >> s;
    int mx = 0, i = 0, j = 0, b = 0;
    for (j = 0; j < n; ++j) {
        b += s[j]=='b';
        while (b>k) {
            b -= s[i++]=='b';
        }
        mx = max(mx, j-i+1);
    }
    int mx2 = 0, a = 0;
    j = 0;
    i = 0;
    for (j = 0; j < n; ++j) {
        a += s[j]=='a';
        while (a>k) {
            a-= s[i++]=='a';
        }
        mx2 = max(mx2, j-i+1);
    }
    cout << max(mx, mx2) << endl;
    
    return 0;
}



