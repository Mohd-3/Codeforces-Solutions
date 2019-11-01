#include <bits/stdc++.h>
using namespace std;
 
int a, b, c, t;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", min(a, min(b, (a+b+c)/3)));
    }
    return 0;
}