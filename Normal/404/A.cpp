#include <bits/stdc++.h>
using namespace std;
int n;
char arr[301][301];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", arr[i]);
    }
    char diag = arr[0][0], non = arr[0][1];
    if (diag == non) {
        puts("NO");
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (abs(i-j) == 0 || i+j == n-1) {
                if (arr[i][j] != diag) {
                    puts("NO");
                    return 0;
                }
            } else {
                if (arr[i][j] != non) {
                    puts("NO");
                    return 0;
                }
            }
        }
    }
    puts("YES");
    return 0;
}

