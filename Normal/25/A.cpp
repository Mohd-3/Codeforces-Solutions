#include <bits/stdc++.h>
using namespace std;
int n, odd, even, win, arr[100];

int main() {;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if (arr[i]&1)
            odd++;
        else
            even++;
    }
    win = odd == 1 ? 1 : 0;
    for (int i = 0; i < n; ++i) {
        if ((arr[i]&1) == win) {
            printf("%d\n", i+1);
            return 0;
        }
    }

    
    return 0;
}
