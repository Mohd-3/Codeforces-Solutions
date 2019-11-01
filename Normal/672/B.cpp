#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, fr[26], cnt;
string s;
int main()
{
    IOS
    cin >> n >> s;
    if (n>26) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        fr[s[i]-'a']++;
        if (fr[s[i]-'a']>1) {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}
