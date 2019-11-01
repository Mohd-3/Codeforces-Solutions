#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, arr[10];
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='L') {
            for (int j = 0; j < 10; ++j) {
                if (!arr[j]) {
                    arr[j] = 1;
                    break;
                }
            }
        } else if (s[i] == 'R') {
            for (int j = 9; ~j; --j) {
                if (!arr[j]) {
                    arr[j] = 1;
                    break;
                }
            }
        } else {
            arr[s[i]-'0']=0;
        }
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
 
 
}