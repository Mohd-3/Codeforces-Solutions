#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n, arr[100001], mn = 1e9;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int i = 0, j = n-1;
    while (i<j) {
        mn = min(mn, arr[i++]+arr[j--]);
    }
    cout << mn << endl;
    return 0;
}