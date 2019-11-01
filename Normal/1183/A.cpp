#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;

bool ok(int x) {
    int sm = 0;
    while (x) {
        sm += x%10;
        x/=10;
    }
    return sm % 4 == 0;
}
int main() {
    IOS
    cin >> n;
    while (!ok(n)) {
        n++;
    }
    cout << n << endl;

    return 0;
}
