#include <bits/stdc++.h>
using namespace std;
int p;

int check(int x) {
    int pp = 1;
    int cur = x;
    while (pp < p-1) {
        if ((x-1)%p == 0)
            return 0;
        x = (x%p * cur%p)%p;
        pp++;
    }
    return (x-1)%p == 0 ? 1 : 0;
}

int main() {
    scanf("%d", &p);
    int cnt = 0;
    for (int i = 1; i < p; ++i) {
        cnt += check(i);
    }
    printf("%d\n", cnt);
    return 0;
}

