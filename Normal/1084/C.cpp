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

int n, M = 1e9+7;
ll st[100001], en[100001];
ll ans;
string s;
bool ok = 1;
int main() {
    IOS;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        st[i] = en[i] = s[i]=='a';
        ans += s[i]=='a';
    }
    for (int i = 1; i < n; ++i) {
        st[i] += st[i-1];
    }
    for (int i = n-2; ~i; --i) {
        en[i] += en[i+1];
    }

    for (int i = 1; i < n-1; ++i) {
        if (s[i] == 'b' && ok) {
            ans = (ans%M + (st[i]*en[i])%M)%M;
            ok = 0;
        } else if (s[i] == 'a') {
            ok = 1;
        }
    }
    cout << ans%M << endl;


    return 0;
}

