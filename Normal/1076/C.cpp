#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int t;
double n;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        if (n && n < 4) {
            cout << "N" << endl;
            continue;
        }
        double ans = (n + sqrt(n*n-4*n))/2;
        cout << "Y ";
        cout.precision(10);
        cout << fixed << ans << " " << n-ans << endl;
    }
    return 0;
}





