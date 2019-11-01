#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, t;
pair<int, string> tmp;
vector<pair<int, string>> arr[100001];
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> tmp.second >> t >> tmp.first;
        arr[t].add(tmp);
    }
    for (int i = 1; i <=m; ++i) {
        sort(arr[i].begin(), arr[i].end(), greater<pair<int, string>>());
    }
    for (int i = 1; i <= m; ++i) {
        if (arr[i].size()>2 && arr[i][2].first==arr[i][1].first) {
            cout << "?" << endl;
        } else {
            cout << arr[i][0].second << " " << arr[i][1].second << endl;
        }
    }

    
    return 0;
}

