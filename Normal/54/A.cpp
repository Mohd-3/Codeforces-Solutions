#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, c, arr[366], cnt;
int main() {
    IOS
    cin >> n >> k >> c;
    for (int i = 1; i <= c; ++i) {
        cin >> arr[i];
        cnt += (arr[i]-arr[i-1]-1)/k;
    }
    cnt += c+(n-arr[c])/k;
    cout << cnt << endl;
    
    return 0;
}








