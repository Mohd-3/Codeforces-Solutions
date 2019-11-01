#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> v(4);
int min(int x, int y) {
    return x < y ? x : y;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        v[tmp].push_back(i+1);
    }
    int ma = min(v[1].size(), min(v[2].size(), v[3].size()));
    printf("%d\n", ma);
    for (int i = 0; i < ma; ++i) {
        printf("%d %d %d\n", v[1][i], v[2][i], v[3][i]);
    }
    return 0;
}
