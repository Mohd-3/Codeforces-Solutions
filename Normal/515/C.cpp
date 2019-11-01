#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string arr[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
int n;
string s, ans;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        ans+=arr[s[i]-'0'];
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    
    
    return 0;
}






