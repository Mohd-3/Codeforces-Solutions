#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
ll arr[100001];
 
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    vector<ll> v(n);
    v[0] = arr[0];
    v[n-1] = arr[2];
    v[1] = arr[1];
    for (int i = 2; i < n-1; ++i) {
        v[i] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i==0) {
            if (v[i] >= v[i+1] + v[n-1]) {
                cout << "NO" << endl;
                return 0;
            }
        } else if (i== n-1) {
            if (v[i] >= v[i-1] + v[0]) {
                cout << "NO" << endl;
                return 0;
            }
        } else {
            if (v[i] >= v[i-1] + v[i+1]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " \n"[i==n-1];
    }
 
    return 0;
}