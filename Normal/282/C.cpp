#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s1, s2;
int main() {
    IOS
    cin >> s1 >> s2;
    if (s1.size()!=s2.size() || s1.size()==1 && s1[0]!=s2[0]) {
        cout << "NO" << endl;
        return 0;
    }
    if (s1.size()==1) {
        cout << (s1==s2 ? "YES" : "NO") << endl;
        return 0;
    }
    int a =0, b =0 ;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i]=='1')
            a++;
        if (s2[i]=='1')
            b++;
    }
    cout << ((a and b) || (!a and !b)? "YES\n" : "NO\n");
    
    return 0;
}






