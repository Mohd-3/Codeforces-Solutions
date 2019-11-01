#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, l, r, smL, smR;
int main() {
    IOS
    cin >> n >> l >> r;
    int i = 1;
    int l2 = l, n2 = n;
    while (l-- && n--) {
        smL += i;
        i<<=1;
    }
    smL += n;
    i = 1;
    while (r-- && n2--) {
        smR += i;
        i<<=1;
    }
    i>>=1;
    if (n2) {
        smR += n2 * i;
    }
    cout << smL << " " << smR << endl;
    return 0;
 
 
}