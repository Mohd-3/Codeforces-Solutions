#include <bits/stdc++.h>
using namespace std;
int n, d, arr[101], s;
int main() {
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        s += arr[i];
    }
    if ((n-1)*10+s > d) {
        puts("-1");
        return 0;
    }
    int count = (n-1)*2 + (d-s-((n-1)*10))/5;
    printf("%d\n", count);
    return 0;
}
