#include <bits/stdc++.h>
using namespace std;
int a, b, r;
int main() {
    scanf("%d %d %d", &a, &b, &r);
    printf("%s\n", min(a,b) < (r<<1) ? "Second" : "First");
    return 0;
}

