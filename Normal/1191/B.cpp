#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
string arr[3];
int main() {
    IOS
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    if (arr[0] == arr[1] && arr[0] == arr[2]) {
        cout << 0 << endl;
        return 0;
    }
    if (arr[0] == arr[1] || arr[1] == arr[2]) {
        cout << 1 << endl;
        return 0;
    }
    if (arr[0][1] == arr[1][1] || arr[0][1] == arr[2][1] || arr[1][1] == arr[2][1]) {
        int a = arr[0][0]-'0', b = arr[1][0]-'0', c = arr[2][0]-'0';
        if (b-a == 1 && c-b == 1 && arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]) {
            cout << 0 << endl;
            return 0;
        }
        if ((b-a == 1 && arr[0][1] == arr[1][1]) || (c-b == 1 && arr[1][1] == arr[2][1]) || (c-a == 1 && arr[0][1] == arr[2][1])) {
            cout << 1 << endl;
            return 0;
        }
        if ((b-a == 2 && arr[0][1] == arr[1][1]) || (c-b == 2 && arr[1][1] == arr[2][1]) || (c-a == 2 && arr[0][1] == arr[2][1])) {
            cout << 1 << endl;
            return 0;
        }
        
    }
    cout << 2 << endl;
    return 0;
}