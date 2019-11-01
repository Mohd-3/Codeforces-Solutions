#include <bits/stdc++.h>
using namespace std;

int r1, r2, c1, c2, d1, d2;
int main() {
    scanf("%d %d %d %d %d %d", &r1, &r2, &c1, &c2, &d1, &d2);
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            for (int k = 1; k < 10; ++k) {
                for (int s = 1; s < 10; ++s) {
                    if (i == j || i == k || i ==  s || j == k || j == s || k == s)
                        continue;
                    if (i+j == r1 && s+k == r2 && i+k == d1 && j+s == d2 && i+s == c1 && k+j == c2) {
                        printf("%d %d\n%d %d\n", i, j, s, k);
                        return 0;
                    }
                }
            }
        }
    }
    printf("-1\n");

    return 0;
}

