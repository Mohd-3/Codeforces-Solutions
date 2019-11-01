#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
string a, b;
int main() {
    IOS
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i]!=b[i]) {
            if (i<n-1) {
                if (a[i+1] == b[i] and b[i+1]==a[i]) {
                    a[i]= b[i];
                    a[i+1] = b[i+1];
                }
                cnt++;
            } else {
               cnt++; 
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

