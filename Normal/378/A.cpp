#include <bits/stdc++.h>
using namespace std;
int a, b, first, second, draw;
int main() {
    scanf("%d %d", &a, &b);
    for (int i = 1; i < 7; ++i) {
        if (abs(a-i) == abs(b-i))
            draw++;
        else if (abs(a-i) < abs(b-i))
            first++;
        else
            second++;
    }
    printf("%d %d %d\n", first, draw, second);

    return 0;
}

