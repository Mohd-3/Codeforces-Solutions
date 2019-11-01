#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
pair<int, int> arr[101];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr, arr+n);
    for (int i = 0; i < (n>>1); ++i) {
        cout << arr[i].second << " " << arr[n-i-1].second << endl;
    }
 
}