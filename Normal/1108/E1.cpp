#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n, m;
ll arr[301], mn=1e9+1, mx, idx1, idx2, a, b, cnt, tmp=0;
vector<int> v;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < mn) {
            mn = arr[i];
            idx2 = i+1;
        }
        tmp=max(tmp, arr[i]);
    }
    if (arr[0] > arr[n-1]) {
        mx = arr[0];
        idx1 = 1;
    } else {
        mx = arr[n-1];
        idx1 = n;
    }
    for (int i = 1; i <= m; ++i) {
        cin >> a >> b;
        if (idx1 < a || idx1 > b) {
            cnt++;
            if (idx2 >= a && idx2 <= b) {
                mn--;
            }
            v.add(i);
        }
    }
    if (v.size()==0) {
        for (int i = 0; i < n; ++i) {
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
        cout << mx-mn << endl;
        cout << 0 << endl;
        return 0;
    }
    cout << mx-mn << endl;
    cout << v.size() << endl;
    for (int i =0; i < v.size(); ++i) {
        cout << v[i] << " \n"[i==v.size()-1];
    }
    return 0;
}


