#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, idx;
ll arr[100001], bst;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];

    }
    sort(arr+1, arr+n+1, greater<int>());

    for (int i = 1; i <= n; ++i) {
        arr[i] += arr[i-1];
        if (arr[i] + i*(i*(i+1))/2 <= k) {
            bst = arr[i] + i*(i*(i+1))/2;
            idx = i;
        } else {
            break;
        }

    }

    cout << idx << " " << bst << endl;




    return 0;
}
