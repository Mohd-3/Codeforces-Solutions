#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
bool lucky(ll x) {
    x = abs(x);
    while (x) {
        if (x%10 == 8)
            return 1;
        x/=10;
    }
    return 0;
}
int main() {
    cin >> n;
    ll tmp = n/10;
    int count = 1;
    while (!lucky(++n)) {
        count++;
    }
    cout << count << endl;

    return 0;
}

