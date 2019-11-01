#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, arr[5001];
double mx;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int cur = 0;
        for (int j = i; j < n; ++j) {
            cur += arr[j];
            if (j-i+1 >= k) {
                mx = max(mx, 1.0*cur/(j-i+1));
            }
        }
    }
    cout.precision(15);
    cout << fixed << mx << endl;
    
    return 0;
}



