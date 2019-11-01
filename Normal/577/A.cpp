#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, x, ans;
int main() {
    IOS
    cin >> n >> x;
    for (int i = 1; i*i <= x; ++i) {
        if (x%i==0) {
            if (i<=n && x/i <= n) {
                ans++;
                if (x/i != i)
                    ans++;
            } 
        }
    }
    cout << ans << endl;

    
    return 0;
}



