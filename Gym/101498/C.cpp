#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, arr[3], mn, ans;
string idx[] = {"First", "Second", "Third"};
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> arr[0] >> arr[1] >> arr[2];
        mn = 1e9+5;
        for (int i = 0; i < 3; ++i) {
            if (arr[i] < mn) {
                mn = arr[i];
                ans = i;
            }
        }
        cout << idx[ans] << endl;
       }
    return 0;
}