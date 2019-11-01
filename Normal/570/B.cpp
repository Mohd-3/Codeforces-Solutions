#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m;
int main()
{
    IOS
    cin >> n >> m;
    if (m ==1) {
        if (n==1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }

        return 0;
    }
    if (m == n) {
        cout << n-1 << endl;
        return 0;
    }
    if (n-m > m-1) {
        cout << m+1 << endl;
    } else {
        cout << m-1 << endl;
    }

    return 0;
}
