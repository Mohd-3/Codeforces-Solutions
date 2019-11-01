#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    if (n&1) {
        puts("-1");
        return 0;
    }
    for (int i = 1; i < n; i+=2) {
        cout << i+1 << " " << i << " \n"[i==n-1];
    }

    return 0;
}

