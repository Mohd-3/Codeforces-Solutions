#include <bits/stdc++.h>
using namespace std;

int n, m;
int main() {
    cin >> n >> m;
    int mx = 0, mn = 1e9;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        mn = min(mn, tmp);
        mx = max(mx, tmp);
    }
    int wrong = 1e9;
    for (int i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        wrong = min(tmp, wrong);
    }
    int v = mx;
    if (mn*2 > v)
        v = mn*2;
    cout << (v < wrong ? v : -1) << endl;

    return 0;
}

