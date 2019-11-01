#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s1, s2;

bool con(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}
int main() {
    IOS
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < s1.size(); ++i) {
        if (con(s1[i]) != con(s2[i])) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    
    return 0;
}











