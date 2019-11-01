#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, n, arr[200001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int inc = 0, dec = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i-1]) {
            if (dec) {
                cout << "NO" << endl;
                return 0;
            }
 
        } else {
            dec = 1;
        }
 
    }
    cout << "YES" << endl;
    return 0;
 
}