#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, fr[101], tmp;
vector<int> v;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (fr[tmp])
            continue;
        v.add(i+1);
        fr[tmp]=1;
    }
    if (v.size()>=k) {
        cout << "YES\n";
        for (int i = 0; i < k; ++i) {
            cout << v[i] << " \n"[i==k-1];
        }
    } else {
        cout << "NO\n";
    }
    
    return 0;
}



