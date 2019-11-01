#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

string s, v = "aeiou13579";
int cnt;
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (v.find(s[i]) != string::npos) {
            cnt++;
        }
    } 
    cout << cnt << endl;
    return 0;
}

