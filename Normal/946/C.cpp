#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
char c = 'a';
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (c > 'z') {
            break;
        }
        if (s[i]==c) {
            c++;
        } else if (s[i] < c) {
            s[i] = c++;
        }
    }
    if (c <= 'z') {
        cout << -1 << endl;
    } else {
        cout << s << endl;
    }
    
    return 0;
}










