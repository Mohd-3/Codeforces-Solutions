#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, a, b, lst, cnt;
pair<int, int> arr[100001];

int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        if (i==0) {
            lst = arr[i].second;
        } else {
            if (arr[i].second<lst)
                cnt++;
            else
                lst=arr[i].second;
        }
    }
    cout << cnt << endl;

    return 0;
}

