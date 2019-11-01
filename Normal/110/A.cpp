#include <bits/stdc++.h>

using namespace std;

int x;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> s;
    x = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '4' || s[i] == '7')
            x++;
    }

    cout << (x == 4 || x == 7 ? "YES" : "NO") << "\n";

    return 0;
}
