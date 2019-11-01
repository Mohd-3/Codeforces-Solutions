#include <bits/stdc++.h>
using namespace std;

int n, tmp, m, arr[1000000], l, r, neg, pos;
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
       if (tmp > 0)
           pos++;
       else
           neg++;
    }
    while (m--) {
        scanf("%d %d", &l, &r);
        int num = r-l+1;
        if ((num&1) == 0 && neg >= num>>1 && pos >= num>>1)
            printf("1\n");
        else
            printf("0\n");

    }
    return 0;
}

