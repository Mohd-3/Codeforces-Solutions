#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, idx[200001], arr[200001], r[200001], l[200001], ans[200001];
set<int> se;
int main()
{
    IOS
    cin >> n >> k;
    memset(r, -1, sizeof r);
    memset(l, -1, sizeof l);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        idx[arr[i]] = i;
        if (i!=0) {
            l[arr[i]] = arr[i-1];
        }
        se.insert(arr[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        r[arr[i]] = arr[i+1];
    }
    int rr = 0;
    while (true) {
        if (se.size()==0) {
            break;
        }
        auto itrr = se.rbegin();
        int cur = *itrr;
        ans[idx[cur]] = rr+1;
        se.erase(cur);
        for (int i = 0; i < k; ++i) {
            int rgt = r[cur];
            if (~rgt) {
                ans[idx[rgt]] = rr+1;
                if (~r[rgt]) {
                    l[r[rgt]] = l[cur];
                }

                se.erase(rgt);
                r[cur] = r[rgt];
            }
            int lft = l[cur];
            if (~lft) {
                ans[idx[lft]] = rr+1;
                if (~l[lft]) {
                    r[l[lft]] = r[cur];
                }

                se.erase(lft);
                l[cur] = l[lft];
            }
            if (lft == -1 && rgt == -1) {
                break;
            }
        }
        rr = !rr;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i];
    }
    cout << endl;


    return 0;
}
