#include <bits/stdc++.h>
using namespace std;
char s[101];
int n, cnt, q[101];
int main() {
    scanf("%s", s);
    n = strlen(s);
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'Q')
            q[i] = 1;
        if (i != 0)
            q[i] += q[i-1];
    }
    for (int i = 1; i < n; ++i) {
        if (s[i] == 'A') {
            cnt += q[i-1] * (q[n-1]-q[i]);
        }
    }
    printf("%d\n", cnt);
    return 0;
}
