#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n1, n2, k1, k2, M= 1e8, dp[101][101][11][11];

int solve(int f=0, int h=0, int nn1=n1, int nn2=n2) {
    if (f > k1)
        return 0;
    if (h > k2)
        return 0;
    if (nn1==0 && nn2==0) {
        return 1;
    }
    int &ret = dp[nn1][nn2][f][h];
    if (~ret)
        return ret;
    ret =0 ;
    if (nn1>0) {
        ret += solve(f+1, 0, nn1-1, nn2);
        if (ret>M)
            ret-= M;
    }
    if (nn2>0) {
        ret += solve(0, h+1, nn1, nn2-1);
        if (ret>M)
            ret -= M;
    }
    return ret;
}
int main() {
    IOS
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof dp);
    cout << solve() << endl; 
    
    return 0;
}





