#include <bits/stdc++.h>
using namespace std;
int n, x, l, r;
int main() {
    cin >> n >> x;
    int cur = 1, count = 0;
    while (n--) {
        cin >> l >> r;
        while (cur < l) {
            if (cur+x > l)
                break;
            cur += x;
        }
        count += r-cur+1;
        cur = r+1;
    }
    cout <<  count << endl;

    return 0;
}

