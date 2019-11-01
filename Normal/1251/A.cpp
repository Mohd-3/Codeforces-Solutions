#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n;
char s[501];
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        n = strlen(s);
        if (n == 1) {
            printf("%s\n", s);
            continue;
        }
        char lst = s[0];
        int cnt = 1;
        set<char> ans;
        for (int i = 1; i < n; ++i) {
            if (s[i] == lst) {
                cnt++;
                if (i == n-1) {
                    if (cnt&1) {
                        ans.insert(s[i]);
                    }
                }
            } else {
                if (cnt&1) {
                    ans.insert(lst);
                }
                lst = s[i];
                cnt = 1;
            }
        }
        if (cnt&1) {
            ans.insert(s[n-1]);
        }
         
        for (char cc : ans) {
            printf("%c", cc);
        }
        puts("");
    }
    return 0;
}



