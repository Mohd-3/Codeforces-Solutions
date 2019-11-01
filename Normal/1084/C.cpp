#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

string s;
int n, M = 1e9+7;
ll ans;
int main() {
    IOS;
    cin >> s;
    n = s.size();
    ans = 1;
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            cnt++;
        } else if (s[i] == 'b') {
            if (cnt) {
                ans = ((ans%M) * (cnt+1)%M)%M;
                cnt = 0;
            }
        }
    }
    if (cnt) {
        ans = ((ans%M) * (cnt+1)%M)%M;
    }
    cout << ans-1 << endl;

    return 0;
}

