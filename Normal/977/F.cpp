#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200001], mx=0, idx;
map<int, int> ans;
vector<int> v;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        ans[arr[i]] = max(ans[arr[i]], ans[arr[i]-1]+1);
        if (ans[arr[i]] > mx) {
            mx = ans[arr[i]];
            idx = arr[i];
        }
    }
    cout << mx << endl;
    if (mx==0) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = n-1; ~i; --i) {
        if (arr[i]==idx) {
            v.push_back(i+1);
            idx--;
        }
    }

    while (!v.empty()) {
        cout << v.back() << " \n"[v.empty()];
        v.pop_back();
    }


    return 0;
}
