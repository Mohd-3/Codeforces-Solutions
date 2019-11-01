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

int cups, medals, n, tmp;
int main() {
    IOS;
    for (int i = 0; i < 3; ++i) {
        cin >> tmp;
        cups += tmp;
    }
    for (int i = 0; i < 3; ++i) {
        cin >> tmp;
        medals += tmp;
    }
    cin >> n;
    n -= (cups+4)/5;
    n -= (medals+9)/10;
    cout << (n >= 0 ? "YES" : "NO") << endl;

    return 0;
}

