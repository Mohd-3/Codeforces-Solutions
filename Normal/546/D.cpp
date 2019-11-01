#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

const int N = 5000000;
int t, a, b, spf[5000001], cnt[5000001];

void sieve() {
    iota(spf, spf+N+1, 0);
    for (int i = 4; i <= N; i+=2) {
        spf[i] = 2;
    }
    for (ll i = 3; i*i <= N; i+=2) {
        if (spf[i] == i) {
            for (ll j = i<<1; j <= N; j+=i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}
int main() {
    IOS
    sieve();
    for (int i = 2; i <= N; ++i) {
        int x = i;
        while (x != 1) {
            cnt[i]++;
            x /= spf[x];
        }
        cnt[i] += cnt[i-1];
    }
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << cnt[a] - cnt[b] << endl;
    }
    return 0;
}