#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
double y, x, b;
int main() {
    //freopen("darwin.in", "r", stdin);
    IOS
    cin >> y >> x;
    cout.precision(6);
    cout << fixed << ((x*x) - (y*y)) / (2*y) << endl;
 
 
    return 0;
 
 
}