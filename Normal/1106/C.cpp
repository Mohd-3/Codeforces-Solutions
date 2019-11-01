#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

int n;
ll arr[300001], ans;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int i = 0, j = n-1;
    while (i < j) {
        ans += (arr[i]+arr[j])*(arr[i]+arr[j]);
        i++;
        j--;
    }
    cout << ans << endl;

    return 0;
}


