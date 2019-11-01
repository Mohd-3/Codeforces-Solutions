#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, mn=1e9+1, dis= 1e9, arr[100001], lst=-1;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i]==mn) {
            if (lst==-1) {
                lst = i;
            } else {
                dis = min(dis, i-lst);
                lst = i;
            }
        }
    }
    cout << dis << endl;

    
    return 0;
}




