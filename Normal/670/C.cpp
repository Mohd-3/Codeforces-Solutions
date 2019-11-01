#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, tmp, m2;
pair<int, pair<int, int>> mov[200001];
unordered_map<int, int> m;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        m[tmp]++;
    }
    scanf("%d", &m2);
    for (int i = 0; i < m2; ++i) {
        scanf("%d", &mov[i].second.first);
        mov[i].first = i+1;
    }
    for (int i = 0; i < m2; ++i) {
        scanf("%d", &mov[i].second.second);
    }
    sort(mov, mov+m2, [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
         if (m[a.second.first] == m[b.second.first]) {
            return m[a.second.second] > m[b.second.second];
         }
         return m[a.second.first] > m[b.second.first];
         });
    printf("%d\n", mov[0].first);
    return 0;
}
