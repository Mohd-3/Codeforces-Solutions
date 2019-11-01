#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n, arr[200001], cnt[200001], idx[200001];
vector<int> v;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i =0; i < n; ++i) {
            scanf("%d", &arr[i]);
            arr[i]--;
            cnt[i] = -1;
        }
        for (int i =0; i < n; ++i) {
            int c = 0;
            if (cnt[i] == -1) {
                int pos = arr[i];
                v.clear();
                while (true) {
                    c++;
                    v.emplace_back(pos);
                    if (pos == i) {
                        break;
                    }
                    pos = arr[pos];
                }
                for (int x : v) {
                    cnt[x] = c;
                }

            } 
        }
        for (int i = 0; i < n; ++i) {
            printf("%d ", cnt[i]);
        }
        puts("");

    }
    return 0;
}



