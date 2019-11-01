#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n, a, b, c;
char s[101];
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d%d%s", &n, &a, &b, &c, s);
        int res = 0;
        string ret = "";
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'R') {
                if (b) {
                    res++;
                    b--;
                    ret.push_back('P');
                } else {
                    ret.push_back('X');
                }
            } else if (s[i] == 'P') {
                if (c) {
                    res++;
                    c--;
                    ret.push_back('S');
                } else {
                    ret.push_back('X');
                }
            } else {
                if (a) {
                    res++;
                    a--;
                    ret.push_back('R');
                } else {
                    ret.push_back('X');
                }
            }
        }
        if (res >= (n+1)/2) {
            puts("YES");
            for (int i = 0; i < n; ++i) {
                if (ret[i] != 'X') {
                    printf("%c", ret[i]);
                } else {
                    char cc = 'x';
                    if (a) {
                        a--;
                        cc = 'R';
                    } else if (b) {
                        b--;
                        cc = 'P';
                    } else {
                        c--;
                        cc = 'S';
                    }
                    printf("%c", cc);
                }
            }
            puts("");
        } else {
            puts("NO");
        }
    }
    return 0;
}

