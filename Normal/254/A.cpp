#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, d;
vector<int> v[5001];
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n<<1; ++i) {
        scanf("%d", &d);
        v[d].emplace_back(i+1);
    }
    for (int i = 1; i < 5001; ++i) {
        if (v[i].size()&1) {
            puts("-1");
            return 0;
        }
    }
    for (int i = 1; i < 5001; ++i) {
        while (v[i].size()) {
            int a = v[i].back();
            v[i].pop_back();
            int b = v[i].back();
            v[i].pop_back();
            printf("%d %d\n", a, b);
        }
    }

    return 0;
}


