#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, fr[101], mx, tmp;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        fr[tmp]++;
        mx = max(mx, fr[tmp]);
    }
    cout << mx << endl;
    
    return 0;
}



