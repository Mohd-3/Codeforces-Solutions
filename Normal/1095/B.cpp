#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n, arr[100001];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n==2) {
        cout << 0 << endl;
        return 0;
    }
    sort(arr, arr+n);
    cout << min(arr[n-1]-arr[1], arr[n-2]- arr[0]) << endl;

    return 0;
}

