#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a, b, cur;
int main() {
    IOS
    cin >> n;
    a = 1;
    b = 1;
    cur = 1;
    for (int i = 2; cur < n; i=cur+1) {
        if (i > cur) {
            if (a<b) {
                a++;
            } else {
                b++;
            }
            cur += min(a, b);
        }
    }
    cout << a+b << endl;
    
    return 0;
}



