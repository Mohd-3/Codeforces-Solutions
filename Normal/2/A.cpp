#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
ll tmp, mx;
string s, wn;
unordered_map<string, ll> m;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> s >> tmp;
        m[s] += tmp;
        if (m[s] > mx) {
            mx = m[s];
            wn = s;
        }
    }
    cout << wn << endl;
    
    return 0;
}






