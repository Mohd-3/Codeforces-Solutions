#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, n, e1=-1, e2=-1, pos[100001];
pair<int, pair<int, int>> arr[100001];

int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        e1=-1;
        e2=-1;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].first >> arr[i].second.first;
            arr[i].second.second=i;
        }

        sort(arr, arr+n);
        for (int i = 0; i < n; ++i) {
            if (arr[i].first <= e1 && arr[i].first <= e2) {
                e2 = -1;
                break;
            }
            if (e1==-1 || arr[i].first <= e1) {
                pos[arr[i].second.second]=1;
                e1 = max(e1, arr[i].second.first);
            } else{
                pos[arr[i].second.second]=2;
                e2 = max(e2, arr[i].second.first);

            }
        } 
        if (e2==-1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << pos[i] << " \n"[i==n-1];
            }

        }
    }
    return 0;
}





