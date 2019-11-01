#include <bits/stdc++.h>
using namespace std;
int r1, c1, r2, c2, rook, bishop, king;
int main() {
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
    rook = r1 == r2 || c1 == c2 ? 1 : 2;
    king = max(abs(r1-r2), abs(c1-c2));
    bishop = (r1+c1)%2 != (r2+c2)%2 ? 0 : (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 ? 1 : 2);
    printf("%d %d %d\n", rook, bishop, king);
    return 0;
}

