#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, cnt;
string s, arr[5201];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i>0 && arr[i] != arr[i-1]) {
            cnt++;
        }
    }
    if (cnt) {
        cout << 1 << endl;
    } else {
        char c = arr[0][0];
        if (c!='F' && c != '0') {
            cout << 1 << endl;
        } else {
            for (int i = 1; i < arr[0].size(); ++i) {
                if (arr[0][i] != arr[0][i-1]) {
                    cout << 1 << endl;
                    return 0;
                }
            }
            cout << arr[0].size() << endl;
        }
    }
    
    return 0;
}









