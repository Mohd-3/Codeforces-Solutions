#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[101], fr[300];
set<int> se;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        se.insert(arr[i]);
    }
    if (se.size()==1) {
        cout << 0 << endl;
        return 0;
    }
    for (int x = 1; x < 101; ++x) {
        memset(fr, 0, sizeof fr);
        for (int i = 0; i < n; ++i) {
            fr[arr[i]]++;
            fr[arr[i]+x]++;
            if (arr[i]-x>=0) {
                fr[arr[i]-x]++;
            }
        }
        if (fr[arr[n-1]]==n || fr[arr[n-1]+x]==n || (arr[n-1]-x > 0 && fr[arr[n-1]-x]==n)) {
            cout << x << endl;
            return 0;
        }

    }
    cout << -1 << endl;



    return 0;
}