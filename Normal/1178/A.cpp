#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, arr[101], sm, col;
int main() {
    IOS
    cin >> n;
    vector<int> v;
    v.emplace_back(1);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sm += arr[i];
        if (i != 0 && arr[i]*2 <= arr[0]) {
            col += arr[i];
            v.emplace_back(i+1);
        }
    }
    col += arr[0];
    if (col > sm/2) {
        cout << v.size() << endl;
        for (int i = 0; i < (int) v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}