#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, arr[101], a, b, tmp1, tmp2, mx1, mx2;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i]==1)
            a++;
        else
            b++;
    }
    for (int i = 0; i < k; i++) {
        tmp1 = 0;
        tmp2 = 0;
        for (int j = i; j < n; j+=k) {
            if (arr[j]==1) {
                tmp1++;
            } else {
                tmp2++;;
            }

        }
        mx1 = max(mx1, abs((a-tmp1)-(b-tmp2)));
    }
    cout << mx1 << endl;
    
    return 0;
}






