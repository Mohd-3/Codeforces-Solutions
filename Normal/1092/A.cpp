#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int t, n, k;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int c = 0;
        for (int i = 0; i < n; ++i) {
            cout << (char)('a' + (c%k));
            c++;
        }
        cout << endl;
        
    }
    return 0;
}

