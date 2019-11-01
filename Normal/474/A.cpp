#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s = "qwertyuiopasdfghjkl;zxcvbnm,./", op, seq;
map<char, int> m;
int main() {
    IOS
    for (int i = 0; i < s.size(); ++i) {
        m[s[i]]=i;
    }
    cin >> op >> seq;
    if (op=="L") {
        for (int i = 0; i < seq.size(); ++i) {
            cout << s[m[seq[i]]+1];
        }
    } else {
        for (int i = 0; i < seq.size(); ++i) {
            cout << s[m[seq[i]]-1];
        }
    }

    return 0;
}








