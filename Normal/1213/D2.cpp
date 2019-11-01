#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, k, arr[200001];
ll cost[200001], fr[200001];
 
int main() {
    IOS
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
        if (fr[arr[i]] >= k) {
            cout << 0 << endl;
            return 0;
        }
    }
    ll mn = 1e18;
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        int cst = 0;
        ll tmp = arr[i];
        while (tmp) {
            tmp>>=1;
            cst++;
            cost[tmp] += cst;
            fr[tmp]++;
            if (fr[tmp] >= k) {
                mn = min(mn, cost[tmp]);
            }
        }
    }
    cout << mn << endl;
    return 0;
}