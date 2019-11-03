#include <bits/stdc++.h>
using namespace std;

int k, d;
int main() {
    cin >> k >> d;
    if (d == 0 && k > 1) {
        puts("No solution");
        return 0;
    }
    cout << d;
    for (int i = 1; i < k; ++i) {
        cout << 0;
    }
    cout << endl;
    return 0;
}

