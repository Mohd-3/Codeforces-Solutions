#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

char s[201];
int n;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%s", s);
    n = strlen(s);
    for (int i = 0; i < n; ++i) {
        if (s[i]=='.') {
            printf("0");
        } else {
            if (s[i+1]=='.') {
                printf("1");
            } else {
                printf("2");
            }
            ++i;
        }
    }
    puts("");
    return 0;
}