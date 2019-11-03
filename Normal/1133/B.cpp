#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[200001], ans;
map<int, int> fr;
int main()
{
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i]<k) {
            fr[k-arr[i]]++;
        } else {
            fr[arr[i]%k]++;
        }

    }
    for (int i = 1; i < k; ++i) {
        ans += min(fr[i], fr[k-1])*1;
    }
    if (fr[0]%2) {
        fr[0]--;
    }
    ans += fr[0];
    cout << ans << endl;
    return 0;
}
