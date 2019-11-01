#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, k, fr[26];
ll cnt;
multiset<int, greater<>> se;
char s[100001];
int main() {
    scanf("%d%d", &n, &k);
    scanf("%s", s);
    for (int i = 0; i < n; ++i) {
        fr[s[i]-'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (fr[i]) {
            se.insert(fr[i]);
        }
    }
    while (k) {
        int mn = min(k, *se.begin());
        cnt += 1LL*mn * mn;
        k -= mn;
        int old = *se.begin();
        se.erase(se.begin());
        se.insert(old-mn);
    }
    printf("%lld\n", cnt);
    return 0;
}