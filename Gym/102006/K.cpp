#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int t, n, arr[1000001];
int main() {
    freopen("tour.in", "r", stdin);
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> nxt(n), nxt2(n), color(n);
        vector<int> st, st2;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        for (int i = n-1; ~i; --i) {
            while (!st.empty() && arr[st.back()] > arr[i]) {
                st.pop_back();
            }
            if (st.empty()) {
                nxt[i] = -1;
            } else {
                nxt[i] = st.back();
            }
            st.emplace_back(i);
            while (!st2.empty() && arr[st2.back()] < arr[i]) {
                st2.pop_back();
            }
            if (st2.empty()) {
                nxt2[i] = -1;
            } else {
                nxt2[i] = st2.back();
            }
            st2.emplace_back(i);
        }
        set<int> se;
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            if (!color[i]) {
                for (int j = 1; j <= 3; ++j) {
                    if (se.find(j) == se.end()) {
                        color[i] = j;
                        se.insert(j);
                        break;
                    }
                }
            } else {
                se.insert(color[i]);
            }
            if (~nxt[i] && !color[nxt[i]]) {
                for (int j = 1; j <= 3; ++j) {
                    if (se.find(j) == se.end()) {
                        color[nxt[i]] = j;
                        se.insert(j);
                        break;
                    }
                }
            }
            if (~nxt2[i] && !color[nxt2[i]]) {
                for (int j = 1; j <= 3; ++j) {
                    if (se.find(j) == se.end()) {
                        color[nxt2[i]] = j;
                        se.insert(j);
                        break;
                    }
                }
            }
            mx = max(mx, (int)se.size());
            se.clear();
        }
        printf("%d\n", mx);
        for (int i = 0; i < n; ++i) {
            printf("%d%c", color[i], " \n"[i==n-1]);
        }
      }
      return 0;
}