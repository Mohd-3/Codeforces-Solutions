#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int a, b, c;

int main() {
    IOS;
    cin >> a >> b >> c;
    if (c < b) {
        c^=b;
        b^=c;
        c^=b;
    }
    if (c < a) {
        c^=a;
        a^=c;
        c^=a;
    }
    cout << max(0, c-(a+b-1)) << endl;

    return 0;
}

