#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;
 int t, n, st, en;
bool vis[200001];
char s[200001];
vector<int> v;
 bool isValid(int i) {
    return i >= 0 && i < n && s[i] != '#' && !vis[i];
}
void dfs(int src) {
    vis[src] = true;
    int i = src+1, j = src-1;
    if (isValid(i)) {
        dfs(i);
    }
    if (isValid(j)) {
        dfs(j);
    }
}
int main() {
    freopen("portals.in", "r", stdin);
    scanf("%d", &t);
    while (t--) {
         scanf("%d%s", &n, s);
        v.clear();
        memset(vis, false, sizeof vis);
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'o') {
                v.emplace_back(i);
            } else if (s[i] == 's') {
                st = i;
            } else if (s[i] == 'e') {
                en = i;
            }
        }
        dfs(en);
        for (int ch : v) {
            if (vis[ch]) {
                for (int ch2 : v) {
                    if (!vis[ch2]) {
                        dfs(ch2);
                    }
                }
                break;
            }
        }
        int gotR = 0, gotL = 0, cnt = 0;
        if (st == n-1 || !vis[st+1]) {
            gotR = 1;
        }
        if (st < n-1 && vis[st+1]) {
            for (int i = st+1; i < n; ++i) {
                if (s[i] == '.' && vis[i]) {
                    cnt++;
                    gotR = 1;
                    break;
                }
                if (s[i] == '#' || s[i] == 'e' || s[i] == 'o') {
                    break;
                }
            }
        }
        if (st == 0 || !vis[st-1]) {
            gotL = 1;
        }
        if (st && vis[st-1]) {
            for (int i = st-1; ~i; --i) {
                if (s[i] == '.' && vis[i]) {
                    cnt++;
                    gotL = 1;
                    break;
                }
                if (s[i] == '#' || s[i] == 'e' || s[i] == 'o') {
                    break;
                }
            }
        }
        if (!vis[st]) {
            puts("0");
        } else if (gotL && gotR) {
            printf("%d\n", cnt);
        } else {
            puts("-1");
        }
     }
      return 0;
}