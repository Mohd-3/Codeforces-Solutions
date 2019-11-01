#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;


int n, arr[200001], cnt;
int main() {
    IOS
    cin >> n;
    cnt = n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if (arr[0]>1) {
        arr[0]--;
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i]-1 > arr[i-1]) {
            arr[i]--;
        } else if (arr[i]-1 == arr[i-1]) {
            continue;
        } else if (arr[i] == arr[i-1]) {
            arr[i]++;
        } else if (arr[i] < arr[i-1]) {
            arr[i] = arr[i-1];
            cnt--;
        }
        if (arr[i] > 150001) {
            cnt--;
        }
    }
    cout << cnt << endl;
    return 0;
}





