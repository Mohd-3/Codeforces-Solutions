#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, arr[101], a, b, mx;
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        a += arr[i];
    }
    for (int i = 0; i < n; ++i) {
        b += mx-arr[i];
    }
    while (b <= a) {
        b += n;
        mx++;
    }
    cout << mx << endl;


    return 0;
}

