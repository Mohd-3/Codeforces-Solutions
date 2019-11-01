#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
int main() {
    scanf("%d", &n);
    int i = 1, j = n;
    while (i < j) {
        printf("%d %d ", i++, j--);

    }
    if (i == j) {
        printf("%d", i);
    }
    return 0;
}
