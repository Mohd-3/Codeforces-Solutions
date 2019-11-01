#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
int main() {
    IOS
    cin >> n;
    if (n&1) {
        cout << "black\n";
    } else {
        cout << "white\n1 2\n";
    }
    return 0;
}

