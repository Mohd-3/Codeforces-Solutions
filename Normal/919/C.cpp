#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, k, arr[2001][2001];
string s;
int main() {
    IOS
    cin >> n >> m >> k;
    int cnt = 0;
    for (int i = 0; i  < n; ++i) {
        cin >> s;
        int tot = 0, cur = 0;
        for (int j = 0; j < m; ++j) {
            if (s[j]=='.') {
                arr[i][j]=1;
                cur++;
            } else
                cur =0;
            if (cur>=k)
                tot++;
        }
        cnt += tot;
    }
    if (k>1)
    for (int j = 0; j < m; ++j) {
        for (int i = 1; i < n; ++i) {
            if (arr[i][j]) {
                arr[i][j]+=arr[i-1][j];
            } 
            if (arr[i][j]>=k)
                cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}


