#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n;
ll arr[200001];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int j = n-1;
    ll sum1 = 0, sum2 = 0, mx = 0;
    for (int i = 0; i < n-1; ++i) {
        sum1 += arr[i];
        while (sum2 < sum1 && j > i) {
            sum2 += arr[j--];
        }
        if (sum1 == sum2)
            mx = max(mx, sum1);
    }
    cout << mx << endl;
    return 0;
}
