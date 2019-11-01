#include <bits/stdc++.h>
using namespace std;
int t, l, r;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &l, &r);
        int right = (r+1)>>1;
        if ((r&1))
            right *= -1;
        if (l > 1) {
            l--;
            int left = (l+1)>>1;
            if ((l&1))
                left*=-1;
            right -= left;
        }
        printf("%d\n", right);
        
    }
    return 0;
}

