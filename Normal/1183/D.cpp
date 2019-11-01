#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, n, fr[200002], tmp;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> fr(n+1), fr2(n+1);
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            fr[tmp]++;
        }
        int sm = 0;
        for (int i = 1; i <= n; ++i) {
            if (fr[i]) {
                fr2[fr[i]]++;
            }
        }
        for (int i = n; i > 0; --i) {
            if (fr2[i]) {
                sm += i;
                fr2[i]--;
                fr2[i-1] += fr2[i];
            }
        }

        cout << sm << endl;

    }

    return 0;
}
