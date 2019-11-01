#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;

int n, k, d;
deque<int> q;
set<int> se;
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        if (se.find(d) != se.end()) {
            continue;
        }
        if (se.size() >= k) {
            se.erase(q.back());
            q.pop_back();
        }
        se.insert(d);
        q.push_front(d);
    }
    printf("%d\n", se.size());
    while (!q.empty()) {
        printf("%d ", q.front());
        q.pop_front();
    }
    puts("");
    return 0;
}