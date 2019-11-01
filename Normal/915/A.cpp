#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, tmp, bst = 1e9;
int main()
{
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (k%tmp==0) {
            bst = min(bst, k/tmp);
        }
    }
    cout << bst << endl;
    return 0;
}
