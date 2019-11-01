#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll arr[101];
int main() {
    IOS
    cin >> n;
    arr[1] = 1;
    for (int i = 2; i <= n; ++i) {
        arr[i] = arr[i-1] + 4*(i-1);
    }
    cout << arr[n] << endl;
    return 0;
}
