#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
ll arr[1000001], sm, ans;
string s;
int main() {
    IOS
    cin >> n >> s;
    arr[0] = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='1') {
            sm++;
        }
        if (sm >= n) {
            ans += arr[sm-n];
        }
        arr[sm]++;
    }
    cout << ans << endl;
    
    return 0;
}






