#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[10], v, mn = 1e9;
int main()
{
    IOS
    cin >> v;
    for (int i = 1; i <= 9; ++i) {
        cin >> arr[i];
    }
    string ans = "";
    int idx = -1;
    for (int i = 9; i >= 1; --i) {
        if (arr[i] < mn) {
            mn = arr[i];
            idx = i;
        }
    }
    if (mn > v) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < v/mn; ++i) {
        ans += to_string(idx);
    }
    v-= v/mn;
    int st = 0;
    for (int i = 9; i > 0; --i) {
        if (i==idx) {
            continue;
        }
        while (arr[i] <= v+arr[idx] && st < ans.size()) {
            ans[st++] = i;
            v+= arr[idx];
            v -= arr[i];
        }
    }
    if (ans.size()==0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }



    return 0;
}
