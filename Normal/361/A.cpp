#include <bits/stdc++.h>
using namespace std;

int n, k;
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                cout << k;
            } else {
                cout << 0;
            }
            cout << " \n"[j == n-1];
        }
    }
    return 0;
}

