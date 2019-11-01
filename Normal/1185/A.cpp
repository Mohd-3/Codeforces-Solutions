#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll arr[3], d, cnt;

int main() {
    IOS
    cin >> arr[0] >> arr[1] >> arr[2] >> d;
    sort(arr, arr+3);
    cnt += max(0LL, d - (arr[1]-arr[0]));
    cnt += max(0LL, d - (arr[2]-arr[1]));
    cout << cnt << endl;

    return 0;
}
