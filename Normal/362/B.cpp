#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, arr[3001];

string ok() {
    sort(arr, arr+m);
    if (arr[0] == 1 || arr[m-1] == n) {

        return "NO";
    }
    int con = 0;
    for (int i = 1; i < m; ++i) {

        if (arr[i]==arr[i-1]+1) {
            con++;
            if (con>1) {

                return "NO";
            }
        } else {
            con = 0;
        }
    }
    return "YES";

}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
    cout << ok() << endl;

    return 0;
}
