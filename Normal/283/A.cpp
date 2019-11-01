#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
ll n, a, b, c, cur;
ll sm;
ll arr[200001];
vector<int> v;

int main() {
    IOS
    cin >> n;
    cur = 1;
    cout.precision(6);
    while (n--) {
        cin >> a;
        if (a == 1) {
            cin >> b >> c;
            arr[b-1] += c;
            sm += c * b;
            cout << fixed << (1.0*sm/cur) << endl;
        } else if (a == 2) {
            cin >> b;
            v.emplace_back(b);
            cur++;
            sm += b;
            cout << fixed << (1.0*sm/cur) << endl;
        } else {
            sm -= v.back() + arr[cur-1];
            cur--;
            arr[cur-1] += arr[cur];
            arr[cur] = 0;
            v.pop_back();
            cout << fixed << (1.0*sm/cur) << endl;
        }
    }
    return 0;
}





