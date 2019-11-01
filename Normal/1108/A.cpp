#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int l1, r1, l2, r2, t;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 == l2) {
            l2++;
        }
        cout << l1 << " " << l2 << endl;
    }
    return 0;
}

