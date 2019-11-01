#include <bits/stdc++.h>

using namespace std;

int b, g;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> b >> g;
    if (b >= g) {
        while (g--) {
            cout << "BG";
            b--;
        }
        while (b--) {
            cout << "B";
        }
    } else {
        while (b--) {
            cout << "GB";
            g--;
        }
        while (g--)
            cout << "G";
    }
    cout << "\n";

    return 0;
}