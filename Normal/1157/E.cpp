#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200001], tmp;
multiset<int> se;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        se.insert(tmp);
    }
    for (int i = 0; i < n; ++i) {
        int need = n-arr[i];
        auto hi = se.lower_bound(need);
        int hii = *hi;
        if (hi == se.end()) {
            hi = se.begin();
        }
        cout << (arr[i]+*hi)%n << " ";
        se.erase(hi);

    }
    cout << endl;


    return 0;
}
