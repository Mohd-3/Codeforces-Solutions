#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, arr[101], c[101];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (!c[arr[i]]) {
            ++idx;
            for (int j = arr[i]; j <= 100; j+=arr[i]) {
                c[j] = idx;
            }
        }
    }
    cout << idx << endl;
    return 0;
}
 