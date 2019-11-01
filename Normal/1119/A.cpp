#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[300001], lst, fr;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i]!=arr[0]) {
            lst = i;
        }
    }
    for (int i = n-2; ~i; --i) {
        if(arr[i]!=arr[n-1]) {
            fr = n-i-1;
        }
    }

    cout << max(fr, lst) << endl;
    return 0;
}
