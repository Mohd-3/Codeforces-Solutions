#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, ans, c;
char op;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> op >> c;
        if (op == '|') {
            ans |= c;
        } else if (op == '^') {
            ans ^= c;
        } else if (op == '&') {
            ans &= c;
        }
    }
    if (ans) {
        cout << 1 << endl;
        cout << "| " << ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}




