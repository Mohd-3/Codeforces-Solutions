#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[200001], lst;
ll tot;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    reverse(arr, arr+n);
    lst = arr[0];
    tot += lst;
    for (int i = 1; i < n; ++i) {
        if (arr[i]<lst) {
            tot += arr[i];
            lst = arr[i];
        } else {
            lst--;
            if (lst) {
                tot += lst;
            } else {
                break;
            }
        }
    }
    cout << tot << endl;

    return 0;
}