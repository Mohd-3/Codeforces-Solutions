#include <bits/stdc++.h>

using namespace std;

int x1, y1, x2, y2;
int main() {  
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2)) {
        printf("-1\n");
    }
    else if (x1 == x2) {
        printf("%d %d %d %d\n", x1+abs(y1-y2), y1, x2 + abs(y1-y2), y2);
    }
    else if (y1 == y2) {
        printf("%d %d %d %d\n", x1, y1+abs(x1-x2), x2, y2+abs(x1-x2));
    }
    else {
        printf("%d %d %d %d\n", x1, y2, x2, y1);
    }
    return 0;
}
