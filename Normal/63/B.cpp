#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, tmp, cnt;
map<int, int> m;
vector<int> v;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        m[tmp]++;
    }
    while (m[k]!=n) {
        for (auto &x : m) {
            if (x.first == k or x.second<=0)
                continue;
            x.second--;
            v.add(x.first+1);
        }
        while (!v.empty()) {
            if (v.back()<=k)
                m[v.back()]++;
            v.pop_back();
        }
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}







