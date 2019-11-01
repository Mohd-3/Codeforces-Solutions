#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int a, b, t, arr[3], n;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        arr[0] = a;
        arr[1] = b;
        arr[2] = a^b;
        cout << arr[n%3] << endl;
 
    }
    
    return 0;
}
 