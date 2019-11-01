#include <bits/stdc++.h>
using namespace std;

unordered_map<int, string> m;
int n;
int main() {
    m[0] = "O-|-OOOO";
    m[1] = "O-|O-OOO";
    m[2] = "O-|OO-OO";
    m[3] = "O-|OOO-O";
    m[4] = "O-|OOOO-";
    m[5] = "-O|-OOOO";
    m[6] = "-O|O-OOO";
    m[7] = "-O|OO-OO";
    m[8] = "-O|OOO-O";
    m[9] = "-O|OOOO-";

    cin >> n;
    if (!n) {
        cout << m[0] << endl;
    }
    while (n) {
        cout << m[n%10] << endl;;
        n/=10;
    }
    return 0;
}

