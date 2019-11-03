#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, k, q, cnt;
string tmp;
pair<int, int> arr[26];
vector<pair<int, int>> shift;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> m >> k;
    for (int i = 0; i < 26; ++i) {
        arr[i].first = -1;
        arr[i].second = -1;
    }
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        for (int j = 0; j < m; ++j) {
            if (tmp[j]=='S') {
                shift.emplace_back(i, j);
                continue;
            }
            arr[tmp[j]-'a'].first = i;
            arr[tmp[j]-'a'].second = j;
        }
    }
    cin >> q >> tmp;
    for (int i = 0; i < q; ++i) {
        if (tmp[i] >= 'a' && tmp[i] <= 'z') {
            if (arr[tmp[i]-'a'].first == -1) {
                cout << -1 << endl;
                return 0;
            }
        } else {
            if (arr[tmp[i]-'A'].first == -1) {
                cout << -1 << endl;
                return 0;
            }
            int a = arr[tmp[i]-'A'].first;
            int b = arr[tmp[i]-'A'].second;
            if (shift.empty()) {
                cout << -1 << endl;
                return 0;
            }
            int ok = 0;
            for (auto p : shift) {

                if ((p.first-a) * (p.first-a) + (p.second-b) * (p.second-b) <= k*k) {
                    ok = 1;
                    break;
                }

            }
            if (!ok) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;




    return 0;
}
