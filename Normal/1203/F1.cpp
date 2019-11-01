#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, r, a, b;
vector<pair<int, int>> arr, arr2;
int main() {
    IOS
    cin >> n >> r;
    while (n--) {
        cin >> a >> b;
        if (b<0) {
            arr2.emplace_back(a, b);
        } else {
            arr.emplace_back(a, b);
        }
    }
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end(), [](const pair<int, int>& f, const pair<int, int>& s) {
         return s.first+s.second < f.first + f.second;
         });
    for (auto p : arr) {
        if (p.first > r) {
            cout << "NO" << endl;
            return 0;
        }
        r += p.second;
    }
    for (auto p : arr2) {
        if (p.first >r) {
            cout << "NO" << endl;
            return 0;
        }
        r += p.second;
        if (r < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
 
    return 0;
 
 
}