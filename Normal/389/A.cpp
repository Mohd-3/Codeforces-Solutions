#include <bits/stdc++.h>
using namespace std;

int n, tmp, arr[101];
int main() {
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int gcd = __gcd(arr[0], arr[1]);
    for (int i = 2; i < n; ++i) {
        gcd = __gcd(gcd, arr[i]);
    }
    cout << gcd * n << endl;
    return 0;
}

