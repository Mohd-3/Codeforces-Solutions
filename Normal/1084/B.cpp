#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
ll s, allsum, arr[1001];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        allsum += arr[i];
    }
    if (allsum < s) {
        cout << "-1\n";
        return 0;
    }
    if (allsum == s) {
        cout << "0\n";
        return 0;
    }
    if (n == 1) {
        cout << arr[0]-s << endl;
        return 0;
    }
    sort(arr, arr+n);
    ll sm = 0;
    for (int i = 1; i < n; ++i) {
        sm += arr[i]-arr[0];
    }
    if (sm >= s) {
        cout << arr[0] << endl;
        return 0;
    }
    while (sm < s) {
        sm += n;
        arr[0]--;
    }
    cout << arr[0] << endl;

    return 0;
}

