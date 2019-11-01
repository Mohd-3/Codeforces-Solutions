#include <bits/stdc++.h>
using namespace std;
int t;
string s;
unordered_set<string> alcohol = {"VODKA", "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "WHISKEY", "WINE"};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    int cnt = 0;
    while (t--) {
        cin >> s;
        if (s[0] >= '0' && s[0] <= '9') {
            cnt += stoi(s) < 18;
        } else {
            cnt += alcohol.count(s);
        }
    }
    cout << cnt << "\n";
    return 0;
}

