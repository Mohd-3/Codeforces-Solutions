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

int w, b;
double dp[1001][1001][2];
int main() {
    IOS;
    cout.precision(9);
    cin >> w >> b;
    for (int i = 1; i < 1001; ++i) {
        dp[i][0][0] = 1;
    }
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= b; ++j) {
            dp[i][j][0] = 1.0*i/(i+j) + 1.0*j/(i+j)*dp[i][j-1][1];
            dp[i][j][1] = (1.0*j/(i+j)) * (1.0*i/(i+j-1))*dp[i-1][j-1][0] + (j >= 2 ? 1.0*j/(i+j) * 1.0*(j-1)/(i+j-1)*dp[i][j-2][0] : 0);
        }
    }
    cout << fixed << dp[w][b][0] << endl;

    return 0;
}

