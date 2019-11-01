#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int arr[4];
int main() {
    IOS
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    for (int msk = 1; msk < (1<<4); ++msk) {
        int a = 0, b = 0;
        for (int i = 0; i < 4; ++i) {
            if (msk&(1<<i)) {
                a += arr[i];
            } else {
                b += arr[i];
            }
        }
        if (a == b) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
 