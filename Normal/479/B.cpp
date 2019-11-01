#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, cnt;
int arr[101];
vector<pair<int, int>> ans;
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int mx, mn = 1e9;
    while (k--) {
        int idx1, idx2;
        mx = 0;
        mn = 1e9;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > mx) {
                mx = arr[i];
                idx2 = i;
            }
            if (arr[i] < mn) {
                mn = arr[i];
                idx1 = i;
            }
        }
        if (mx == mn) {
            break;
        }
        arr[idx2]--;
        arr[idx1]++;
        ans.emplace_back(idx2+1, idx1+1);
    }
    mx = 0;
    mn = 1e9;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    printf("%d %d\n", mx-mn, ans.size());
    for (auto x : ans) {
        printf("%d %d\n", x.first, x.second);
    }


    return 0;
}
