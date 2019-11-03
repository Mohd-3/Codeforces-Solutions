#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, arr[101], cur, bst=1e9;


int main()
{
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; ++i) {
        int rem = m;
        cur = 0;
        for (int j = 0; j < i; ++j) {
            rem -= arr[j];
            cur++;
            if (rem<=0) {
                break;
            }
        }
        rem -= arr[i];
        cur++;
        if (rem <= 0) {
            bst = min(bst, cur);
            break;
        }
        int day = 1;
        for (int j= i+1; j < n; ++j) {
            rem -= max(0, arr[j]-day);
            day++;
        }
        if (rem <= 0) {
            bst = min(bst, cur);
        }
    }
    cout << (bst==1e9 ? -1 : bst) << endl;

    return 0;
}
