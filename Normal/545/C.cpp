#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
typedef long long ll;

pair<ll, ll> arr[100001];
int n;
ll a, b, cnt;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        arr[i] = {a, b};
    }
    cnt++;
    for (int i = 1; i < n; ++i) {
        if (arr[i].first - arr[i].second > arr[i-1].first) {
            cnt++;
        } else if ((i < n-1 && arr[i].first+arr[i].second < arr[i+1].first) || (i==n-1)) {
            cnt++;
            arr[i].first = arr[i].first+arr[i].second;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
