#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[1001], tmp, ans, lst, bst;
vector<int> v;
int main()
{
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        v.push_back(arr[i]);
        sort(v.begin(), v.end(), greater<int>());
        tmp = k;
        int cur = 0;
        ans = 0;
        for (int j = 0; j < v.size(); ++j) {
            if (j%2==0) {
                if (v[j] <= tmp) {
                    ans++;
                    cur = v[j];
                } else {
                    break;
                }

            }

            if (j&1) {
                cur = max(cur, v[j]);
                if (tmp >= cur) {
                    tmp -= cur;
                    ans++;
                } else  {
                    break;
                }
            }
        }
        bst = max(bst, ans);
    }
    cout << bst << endl;
    return 0;
}
