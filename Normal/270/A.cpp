#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t, d;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &d);
        if (360%(180-d)==0) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
    return 0;
}

