#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, l, r, idx[200001], x, t;
string op;
int main()
{
    IOS
    cin >> n;
    t = n;
    while (n--) {
        cin >> op >> x;
        if (op == "L") {
            idx[x] = l--;
            if (n==t-1) {
                r++;
            }


        } else if (op == "R") {
            if (n==t-1) {
                l--;
            }
            idx[x] = r++;

        } else {

            cout << min(abs(idx[x]-l), abs(idx[x]-r))-1 << endl;
        }
    }

    return 0;
}
