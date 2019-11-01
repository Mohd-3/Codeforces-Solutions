#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
ll arr[100001], cur;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cur = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i]>=cur) {
            cnt++;
            cur += arr[i];
        }
    }
    cout << cnt << endl;
    return 0;
}

