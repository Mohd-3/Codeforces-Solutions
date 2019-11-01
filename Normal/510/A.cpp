#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
    int first = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        char ch = i%2 == 0 ? '#' : '.';
        if (ch == '.')
            first++;
        for (int j = 0; j < m; ++j) {
            if (i%2 != 0 && j == 0) {
                if (first%2 == 0) {
                    printf("#");
                } else
                    printf(".");
            }
            else if (i%2 != 0 && j == m-1) {
                if (first%2 != 0) {
                    printf("#");
                } else
                    printf(".");
            }
            else
                printf("%c", ch);
        }
        printf("\n");
    } 
    return 0;
}
