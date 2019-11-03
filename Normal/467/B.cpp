#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define nrange(i, s) for(int (i) = (s); ~i; --(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define cnrange(i, s, e, dec) for(int(i) = (s); (i) >= (e); (i)-=(dec))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int n, m, k, fedor, cnt, arr[1001];
int main() {
    IOS;
    cin >> n >> m >> k;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    } 
    cin >> fedor;
    for (int i = 0; i < m; ++i) {
        int cur = 0;
        for (int j = 0; j < n; ++j) {
            if ((arr[i]&(1<<j)) != (fedor&(1<<j))) {
                cur++;
            } 
        }
        if (cur <= k) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

