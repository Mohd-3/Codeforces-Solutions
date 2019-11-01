#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m;
ll d[200001], rm;
pair<ll, pair<int, int>> r[200001];
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> r[i].first;
        r[i].second.first = i+1;
    } 
    int x = 0;
    for (int i = 0; i < m; ++i) {
        while(r[i].first-rm > d[x]) {
            rm+=d[x++];
        }
        r[i].first -= rm;
        r[i].second.second = x+1;
    }
    for (int i = 0; i < m; ++i) {
        cout << r[i].second.second << " " << r[i].first << endl;
    }
    return 0;
}






