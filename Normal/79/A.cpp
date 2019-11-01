#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int x, y;
int main() {
    IOS
    cin >> x >> y;
    int t = 0;
    while (true) {
        if (!t) {
            if (x >= 2 && y >= 2) {
                x-=2;
                y-=2;
            } else if (x >=1 && y >=12) {
                x-= 1;
                y-= 12;
            } else if (y >= 22) {
                y -= 22;
            } else {
                cout << "Hanako" << endl;
                return 0;
            }
        } else {
            if (y>=22) {
                y-= 22;
            } else if (x>=1 && y >= 12) {
                x--;
                y-=12;
            } else if (x>=2 && y >=2) {
                x-=2;
                y-=2;
            } else {
                cout << "Ciel" << endl;
                return 0;
            }
        }
        t ^= 1;
    }
 
    return 0;
}