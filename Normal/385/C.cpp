#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
const int N = 1e7;
int spf[N+1];
int cnt[N+1];
int n, q, l, r, d;
void sieve () {
    iota(spf, spf+N+1, 0);
    for (int i = 4; i <= N; i+=2) {
        spf[i] = 2;
    }
    for (ll i = 3; i*i <= N; ++i) {
        if (spf[i] == i) {
            for (ll j = i*i; j <= N; j+=i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void fact(int n) {
    unordered_set<int> tmp;
    tmp.reserve(n);
    while (n!=1) {
        tmp.insert(spf[n]);
        n = n/spf[n];
    }
    for (int x : tmp) {
        cnt[x]++;
    }
}
int main() {
    IOS
    sieve();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> d;
        fact(d);
    }
    for (int i = 2; i <= N; ++i) {
        cnt[i] += cnt[i-1];
    }
    cin >> q;
    while (q--) {
        cin >> l >> r;
        if (l > 1e7) {
            cout << 0 << endl;
            continue;
        }
        if (r > 1e7){
            r= 1e7;
        }
        cout << cnt[r] - cnt[l-1] << endl;
    }
    return 0;
}





