#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int n, k;
ll tmp, arr[100001];
int main() {
    IOS;
    cin >> n >> k;
    range(i, n) {
        cin >> arr[i];
    } 
    sort(arr, arr+n);
    cout << arr[0] << endl;
    tmp = arr[0];
    k--;
    crange(i, 1, n, 1) {
        if (k == 0) {
            break;
        }
        if (arr[i]-tmp <= 0) {
            continue;
        }
        cout << arr[i]-tmp << endl;
        tmp += arr[i]-tmp;
        k--;
    }
    if (k > 0) {
        while (k--) {
            cout << "0\n";
        }
    }
    return 0;
}

