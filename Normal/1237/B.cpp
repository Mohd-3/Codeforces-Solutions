#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, d, cnt;
queue<int> q;
bool used[100001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        q.push(d);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        while (!q.empty() && used[q.front()]) {
            q.pop();
        }
        if (d != q.front()) {
            cnt++;
            used[d]=true;
        } else {
            q.pop();
        }
    }
    printf("%d\n", cnt);
    return 0;
}



