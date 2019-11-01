#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[200001];
unordered_map<int, int> fr;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int ok = 0;
        ll p = arr[i];
        while ((p&-p)!=p) {
            p+= (p&-p);
        }
        while (p < 2000000000LL) {
            while (p < arr[i]) {
                p<<=1;
            }
            if ((p-arr[i]!=arr[i] and fr[p-arr[i]]>0) or (p-arr[i]==arr[i] and fr[arr[i]]>1)) {
                ok=1;
                break;
            }
            p<<=1;
        }
        if (!ok) {
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}



