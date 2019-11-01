#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[200001], ans;
int main() {
    IOS
    cin >> n;
    cin >> arr[0];
    ans = arr[0];
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        if (arr[i]==1 && arr[i-1]>=1) {

            arr[i]=arr[i-1]+1;


        }
        ans = max(ans, arr[i]);
    }
    if (n > 2 && arr[n-1] >= 1 && arr[0] >= 1) {
        int i;
        for (i = n-1; ~i; --i) {
            if (arr[i]==0) {
                break;
            }
        }
        if (i>0) {
            int j;
            for (j = 0; j < n; ++j) {
                if (arr[j]==0) {
                    break;
                }
            }
            ans = max(ans, arr[n-1]+arr[j-1]);

        }
    }
    cout << ans << endl;


    return 0;
}