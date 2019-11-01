#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200001], bst, cur;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int j = 0, i = 0;
    for (j = 0; j < n; ++j) {
        while (arr[j]-arr[i]>5) {
            i++;
        }
        bst = max(bst, j-i+1);
    }

    cout << bst << endl;
    return 0;
}
