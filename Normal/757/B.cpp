#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[100001], d, mx, ans;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> d;
        for (int i = 1; i*i <= d; ++i) {
            if (d%i==0) {
                arr[i]++;
                if (d/i!=i) {
                    arr[d/i]++;
                }
            }
        }

    }
    for (int i = 2; i < 100001; ++i) {
        mx = max(mx, arr[i]);
    }
    if (!mx)
        mx = 1;
    cout << mx << endl;

    
    return 0;
}










