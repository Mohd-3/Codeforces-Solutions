#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, b, a, arr[200001], pos, b2, a2;
multiset<int> se;
int main()
{
    IOS
    cin >> n >> b >> a;
    a2 = a;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (!arr[i]) {
            if (a>0) {
                a--;
                pos++;
            } else if (b>0) {
                b--;
                pos++;
            } else {
                break;
            }
        } else {
            if (b>0 && a != a2) {
                b--;
                a += a < a2 ? 1 : 0;
                pos++;
            } else if (a>0) {
                a--;
                pos++;
            } else {
                break;
            }
        }
    }
    cout << pos << endl;


    return 0;
}
