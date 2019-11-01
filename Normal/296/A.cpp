#include <bits/stdc++.h>
using namespace std;

int n, tmp, fr[1001];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        fr[tmp]++;
    }
    for (int i = 0; i < 1001; ++i) {
        if (fr[i] > (n+1)/2) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}

