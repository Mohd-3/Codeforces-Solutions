#include <bits/stdc++.h>
using namespace std;

int n, s;
int main() {
    scanf("%d %d", &n, &s);
    int cnt = 0;
    while (s) {
        cnt += s/n;
        s -= n * (s/n);
        n--;
    }
    printf("%d\n", cnt);
    return 0;
}
