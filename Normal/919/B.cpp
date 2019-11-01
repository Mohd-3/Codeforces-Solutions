#include <bits/stdc++.h>
using namespace std;

int k, num = 10;
int sumDigit(int x) {
    int sm = 0;
    while (x) {
        sm += x%10;
        x/=10;
    }
    return sm;
}
int main() {
    scanf("%d", &k);
    while (k) {
        num += 9;
        if (sumDigit(num) == 10)
            k--;
    }
    printf("%d\n", num);
    return 0;
}

