#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, m, d;
queue<pair<int, int>> q;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        q.push({d, i+1});
    }
    pair<int, int> tmp;
    while (!q.empty()) {
        tmp = q.front();
        q.pop();
        tmp.first -= m;
        if (tmp.first > 0) {
            q.push(tmp);
        }
    }
    printf("%d\n", tmp.second);
    return 0;
}