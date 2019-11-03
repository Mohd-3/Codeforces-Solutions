#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, arr[100001], fr[100001];
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
        if (fr[arr[i]]==0) {
            int cnt = 0;
            for (int j = 1; j <= n; ++j) {
                if (fr[j]==0) {
                    cnt++;
                } 
                if (cnt > 1)
                    break;
            }
            if (cnt>1) {
                fr[arr[i]]++;
                cout << 0;
            } else {
                for (int j = 1; j <= n; ++j) {
                    if (j!=arr[i])
                        fr[j]--;
                }
                cout << 1;
            }
        } else {
            fr[arr[i]]++;
            cout << 0;
        }
    }
    
    return 0;
}






