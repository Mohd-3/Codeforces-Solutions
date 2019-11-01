#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
  int n, d, arr[11], val[11];
string s;
int main() {
    cin >> n;
    for (int i =0; i < n; ++i) {
        cin >> s;
        if (s[0]=='A') {
            arr[i] = 0;
        } else if (s[0] == 'S') {
            arr[i] = 1;
        } else if (s[0] == 'M') {
            arr[i] = 2;
        } else {
            arr[i] = 3;
        }
        cin >> val[i];
    }
    int cnt = 0;
    for (int i = 1; i <= 100; ++i) {
        int cur = i;
        for (int j = 0; j < n; ++j) {
            if (arr[j] == 0) {
                cur += val[j];
            } else if (arr[j] == 1) {
                cur -= val[j];
                if (cur < 0) {
                    cnt++;
                    break;
                }
            } else if (arr[j] == 2) {
                cur *= val[j];
            } else {
                if (cur%val[j]) {
                    cnt++;
                    break;
                }
                cur /= val[j];
            }
        }
    }
    cout << cnt << endl;
    return 0;
}