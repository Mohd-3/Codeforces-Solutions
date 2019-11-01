#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, arr[1001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int st = arr[0]+1;
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        while (arr[i]!=st++)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}

