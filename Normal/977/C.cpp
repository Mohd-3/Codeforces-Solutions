#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[200001], tmp;
map<int, int> fr;
set<int> se;
int main()
{
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        fr[tmp]++;
        se.insert(tmp);
    }
    if (k == 0) {
        if (*se.begin()>1) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
    }
    for (int x : se) {
        k -= fr[x];
        if (k < 0) {
            cout << -1 << endl;
            return 0;
        }
        if (k==0) {
            cout << x << endl;
            return 0;
        }
    }
    return 0;
}
