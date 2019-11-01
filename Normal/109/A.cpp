#include <bits/stdc++.h>
using namespace std;

int n, fours;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    while (n%7 != 0 && n > 0) {
        fours++;
        n -= 4;
    } 
    if (n < 0) {
        cout << -1 << endl;
        return 0;
    }
    while (fours--) {
        cout << 4;
    }
    while (n) {
        cout << 7;
        n-=7;
    }
    cout << endl;
    return 0;
}

