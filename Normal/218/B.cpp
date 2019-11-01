#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, d, a, b;
priority_queue<int> q;
priority_queue<int, vector<int>, greater<>> q2;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &m);
    while (m--) {
        scanf("%d", &d);
        q.push(d);
        q2.push(d);
    }
    int n2 = n;
    while (!q.empty() && n2) {
        int tmp = q.top();
        q.pop();
        a += tmp;
        tmp--;
        if (tmp) {
            q.push(tmp);
        }
        n2--;
    }
    while (!q2.empty() && n) {
        int tmp = q2.top();
        q2.pop();
        b += tmp;
        tmp--;
        if (tmp) {
            q2.push(tmp);
        }
        n--;
    }
    printf("%d %d\n", a, b);

    return 0;
}