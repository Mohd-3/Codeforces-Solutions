#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n, arr[101];
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        set<int> se[n]; 
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+n);
        int cnt =0;
        for (int i =0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (se[j].find(arr[i]-1) == se[j].end() && se[j].find(arr[i]+1) == se[j].end()) {
                   cnt = max(cnt, j); 
                   se[j].insert(arr[i]);
                   break;
                }
            }
        }
        printf("%d\n", cnt+1);
    }
    return 0;
}


