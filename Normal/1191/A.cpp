#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
int main() {
    IOS
    cin >> n;
    if (n%4==1) {
        cout << "0 A";
    } else if (n%4==2) {
        cout << "1 B";
    } else if (n%4==3) {
        cout << "2 A";
    } else {
        cout << "1 A";
    }
    return 0;
}