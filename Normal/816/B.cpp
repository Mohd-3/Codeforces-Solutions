#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, q, arr[200002], a, b, mn=1e9, mx=0;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n >> k >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        arr[a]++;
        arr[b+1]--;
    }
    for (int i = 1; i <= 200001; ++i) {
        arr[i] += arr[i-1];
    }
    for (int i = 1; i < 200001; ++i) {
        if (arr[i] < k) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
        arr[i] += arr[i-1];
    }


    while (q--) {
        cin >> a >> b;


        cout << arr[b]-arr[a-1] << endl;
    }

    return 0;
}
