#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[3001], cnt, x;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 1; i < n; ++i) {
        if (arr[i] <= arr[i-1]) {
            cnt += arr[i-1]+1-arr[i];
            arr[i] = arr[i-1]+1;
        }
    }
    cout << cnt << endl;

    return 0;
}

