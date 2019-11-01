#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
ll h, a, r, d, tmp;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (s[i]=='h')
            h +=tmp;
        else if (s[i]=='a')
            a = min(a+tmp, h);
        else if (s[i]=='r')
            r = min(a, r+tmp);
        else if (s[i]=='d')
            d = min(r, d+tmp);
    }
    cout << d << endl;
    return 0;
}

