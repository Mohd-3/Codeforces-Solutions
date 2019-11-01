#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

ll k, n;
int main() {
    IOS
    cin >> n >> k;
    cout << (k <= (n+1)>>1 ? (((k-1)<<1)|1) : ((k-((n+1)>>1))<<1)) << endl;
    return 0;
}




