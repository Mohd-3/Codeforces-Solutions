#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k, l;
int main() {
    cin >> k >> l;
    ll x = k;
    if (k > l || l%k != 0) {
        puts("NO");
        return 0;
    }
    int count = 0;
    while (x <= l) {
        if (x == l) {
            puts("YES");
            cout << count << endl;
            return 0;
        }
        x *= k;
        count++;
        
    }
    puts("NO");
    return 0;
}

