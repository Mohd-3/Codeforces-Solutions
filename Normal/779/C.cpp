#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k;
pair<int, int> arr[200001];

bool srt(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first-a.second == b.first-b.second) {
        return a.first < b.first;
    }
    return a.first-a.second < b.first-b.second;
}
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].second;
    }
    sort(arr, arr+n, srt);
    ll tot = 0;
    int cnt = 0;
    for (int i = 0; i <k; ++i) {
        tot += arr[i].first;
    }
    for (int i = k; i < n; ++i) {
        if (arr[i].first < arr[i].second) {
            tot+= arr[i].first;
        } else {
            tot += arr[i].second;
        }
    }
    cout << tot << endl;
    return 0;
}

