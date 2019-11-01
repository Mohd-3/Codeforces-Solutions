#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int y, b, r;
int main() {
    IOS
    cin >> y >> b >> r;
    if (b >= r) {
        b = r-1;
    } else if (b < r-1) {
        r-= r-b-1;
    }
    if (y >= b) {
        y = b-1;
    } else if (y < b-1) {
        b -= b-y-1;
    }
    cout << y*3+3 << endl;


    return 0;
}

