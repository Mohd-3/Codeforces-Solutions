#include <bits/stdc++.h>
using namespace std;

int n, d, idx = -1, arr[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    d = n > 2 ? min(arr[1]-arr[0], arr[2]-arr[1]) : arr[1]-arr[0];
    if (n == 1) {
        cout << "-1\n";
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i]-arr[i-1] != d) {
            if (arr[i]-arr[i-1]==(d<<1) && idx == -1) {
                idx = i-1;
            }
            else {
                cout << "0\n";
                return 0;
            }
        }
    }
    if (~idx) {
        cout << "1\n" << arr[idx]+d << "\n";
        return 0;
    }
    if (n == 2 && d && !(d&1)) {
        cout << "3\n" << arr[0]-d << " " << arr[0]+(d>>1) << " " << arr[1]+d << "\n";
    } else if (!d) {
        cout << "1\n" << arr[0] << "\n";
    } else {
        cout << "2\n" << arr[0]-d << " " << arr[n-1]+d << "\n";
    }
    return 0;
}

