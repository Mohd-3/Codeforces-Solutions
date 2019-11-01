#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
ll pre, suf;
ll M = 998244353;
string s;
int main() {
    IOS
    cin >> n >> s;
    pre++;
    suf++;
    for (int i =1 ; i < n; ++i) {
        if (s[i]==s[i-1])
            pre = (pre+1)%M;
        else
            break;
    }
    for (int i = n-2; ~i; --i) {
        if (s[i]==s[i+1])
            suf = (suf+1)%M;
        else
            break;
    }

    if (s[0]==s[n-1]) {
        cout << (((pre%M+suf%M)%M+1) + ((pre%M*suf%M)%M))%M << endl;
    } else {
        cout << (pre%M+suf%M+1)%M << endl;
    }

    return 0;
}

