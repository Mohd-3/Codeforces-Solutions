#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n, cnt;
string s, ans;
char arr[] = {'R', 'G', 'B'};
int main() {
    IOS
    cin >> n >> s;
    ans.add(s[0]);
    for (int i = 1; i < n; ++i) {
        if (s[i]==ans[i-1]) {
            for (int j = 0; j < 3; ++j) {
                if (arr[j] != ans[i-1] and (i==n-1 || arr[j]!=s[i+1])) {
                    ans.add(arr[j]);
                    break;
                }
            }
            cnt++;
        } else {
            ans.add(s[i]);
        }
    }
    cout << cnt << endl;
    cout << ans << endl;

    return 0;
}


