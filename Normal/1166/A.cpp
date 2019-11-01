#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

int fr[26], n, ans;
string s;

int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> s;
        fr[s[0]-'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (fr[i]>2) {
            int x = fr[i]>>1, y = fr[i]>>1;
            x += fr[i]%2;
            ans += (x * (x-1))>>1;
            ans += (y * (y-1))>>1;
        }
    }
    cout << ans << endl;
    return 0;
}
