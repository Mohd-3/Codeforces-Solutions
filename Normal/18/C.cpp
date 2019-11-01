#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n;
ll arr[100001];
int main() {
    IOS
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        cnt += (arr[n]-arr[i] == arr[i]);
    }
    cout << cnt << endl;
    return 0;
}





