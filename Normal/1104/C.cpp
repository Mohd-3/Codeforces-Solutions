#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
vector<pair<int, int>> v; 
int main() {
    IOS
    cin >> s;
    int a = 1, b = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='0') {
            v.add({a, 1});
            a+=2;
            if (a > 4) {
                a = 1;
            }
        } else {
            v.add({b, 2});
            b++;
            if (b > 4) {
                b = 1;
            }
        }
    }
    for (auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}








