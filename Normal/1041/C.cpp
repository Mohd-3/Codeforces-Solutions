#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, d, m, arr[200001], org[200001], tmp;
set<pair<int, int>> se;
int main() {
    IOS
    cin >> n >> d >> m;
    for (int i= 1; i <= n; ++i) {
        cin >> org[i];
        se.insert({org[i], i});
    }
    int day =0;
    while (!se.empty()) {
        day++;
        int pos = se.begin()->second;
        arr[pos]=day;
        se.erase(se.begin());
        while (true) {
            auto it = se.lower_bound({org[pos]+1+m, 0});
            if (it==se.end())
                break;
            pos = it->second;
            arr[pos]=day;
            se.erase(it);
        }
    }
    cout << day << endl;
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << " \n"[i==n];
    }

    return 0;
}

