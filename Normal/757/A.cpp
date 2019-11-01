#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
int fr[600];
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        fr[s[i]]++;
    }
    cout << min(fr['l'], min(fr['s'], min(fr['B'], min(fr['u']>>1, min(fr['b'], min(fr['a']>>1, min(fr['r'], fr['u']>>1))))))) << endl;
    
    return 0;
}










