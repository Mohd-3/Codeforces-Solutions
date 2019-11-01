#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n;
pair<string, string> arr[101];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i].second << " " << arr[i].first << endl;
    }
    return 0;
}