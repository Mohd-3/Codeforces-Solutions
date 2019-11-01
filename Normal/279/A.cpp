#include <bits/stdc++.h>
using namespace std;
int x, y, s;
int main() {
    scanf("%d%d", &x, &y);
    if (y > x && x >= -y) {
        s = -2 + y * 4;
    }
    if (y < x && x <= -y + 1) {
        s = -y * 4;
    }
    if (y <= x && x > -y + 1) {
        s = -3 + x * 4;
    }
    if (y >= x && x < -y) {
        s = -1 - 4 * x;
    }
    printf("%d\n", s);
    return 0;
}

