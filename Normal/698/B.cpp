#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, arr[200001], parent[200001];

int get(int x) {
    return (parent[x] == x ? x : parent[x] = get(parent[x]));
}

void join(int x, int y) {
    int p1 = get(x), p2 = get(y);
    if (p1 != p2) {
        parent[p2] = p1;
    }
}
int main() {
    scanf("%d", &n);
    iota(parent, parent+n+1, 0);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        join(arr[i], i);
    }
    int idx = -1, cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] == i) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        arr[get(1)] = get(1);
        cnt++;
        parent[get(1)] = get(1);
        idx = get(1);
    }
    for (int i = 1; i <= n; ++i) {
        if (get(i) != get(idx)) {
            join(idx, i);
            arr[i] = idx;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n]);
    }
    return 0;

}






