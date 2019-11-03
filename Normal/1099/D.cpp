#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, rt[100001], cst[100001];
int main() {
    IOS
    cin >> n;
    for (int i = 1; i < n; ++i) {
        cin >> rt[i];
        rt[i]--;
    }
    for (int i = 0; i < n; ++i) {
        cin >> cst[i];
    }
    for (int i = n-1; ~i; --i) {
        int p = rt[i];
        while (true) {
            if (cst[p]==-1)
                cst[p]=cst[i];
            if (cst[i]==-1) {
                p=rt[p];
                if (p==rt[p])
                    break;
                continue;

            }
            if (cst[i] < cst[p]) {
                cout << -1 << endl;
                return 0;
            }
            p = rt[p];
            if (p == rt[p])
                break;
        }
    }
    int tot = 0;
    for (int i = 0; i < n; ++i) {
        tot = max(tot, cst[i]);
    }
    cout << tot << endl;
    
    
    return 0;
}



