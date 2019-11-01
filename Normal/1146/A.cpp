#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s;
int a, z;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='a') {
            a++;
        } else {
            z++;
        }
    }
    cout << (a>z ? s.size() : (a<<1)-1) << endl;
    return 0;
}
