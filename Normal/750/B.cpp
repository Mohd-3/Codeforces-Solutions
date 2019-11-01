#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
ll tmp, sm;
string dir;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> tmp >> dir;
        if (sm == 0 && dir != "South") {
            cout << "NO\n";
            return 0;
        } else if (sm == 20000 && dir != "North") {
            cout << "NO\n";
            return 0;
        } else {
            if (dir=="North") {
                sm -= tmp;
            } else if (dir=="South") {
                sm += tmp;
            }
            if (sm < 0 || sm > 20000) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    if (!sm) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}

