#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, vis[200001];
pair<int, int> arr[200001];
int main()
{
    IOS
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    int i = 1;
    int cnt = 1;
    while (cnt <= n) {
        int l = arr[i].first, r = arr[i].second;
        if ((arr[l].first == r || arr[l].second == r) && !vis[l]) {
            cout << l << " ";
            vis[l] =  1;

            i = l;
        } else {
            cout << r << " ";
            vis[r] = 1;
            i = r;
        }
        cnt++;
    }
    cout << endl;


    return 0;
}
