#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, ans;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = n-1; ~i; --i) {
        if (((s[i]-'0')&1)==0) {
            ans += i+1;
        }
    }
    cout << ans << endl;


    return 0;
}