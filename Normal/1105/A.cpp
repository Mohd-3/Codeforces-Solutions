#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[1001], avg, sm, cnt=1e9;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i <101; ++i) {
        int cur = 0;
        for (int j = 0; j < n; ++j) {
            if (abs(arr[j]-i)>1) {
                cur += abs(arr[j]-i)-1;
            }
        }
        if (cur < cnt) {
            cnt = cur;
            sm = i;
        }

    }
    cout << sm << " " << cnt << endl;

    
    return 0;
}






