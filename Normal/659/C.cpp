#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, tmp;
unordered_set<int> se;
vector<int> ans;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        se.insert(tmp);
    }
    for (int i = 1; i < 1000000; ++i) {
        if (se.find(i)!=se.end()) {
            continue;
        }
        if (i > m)
            break;
        ans.add(i);
        m-= i;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " \n"[i==ans.size()-1];
    }
    
    
    return 0;
}


