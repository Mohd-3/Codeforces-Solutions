#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
const int INF = 0x3f3f3f3f;

int t, n;
int main() {
    IOS;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n%7==0) {
            cout << n / 7 << endl;
        } else {
            cout << n/7+1 << endl;
        }
    }

    return 0;
}

