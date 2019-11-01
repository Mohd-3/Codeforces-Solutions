#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

multiset<int> se;
int cnt, tmp, n, before[25];
int main()
{
    IOS
    //bfreopen("balalance.in", "r", stdin);
    cin >> n;
    before[8] = 4;
    before[15] = 8;
    before[16] = 15;
    before[23] = 16;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp == 4) {
            se.insert(4);
        } else if (tmp == 42) {
            auto x = se.find(23);
            if (x != se.end()) {
                se.erase(x);
                cnt++;
            }
        } else {
            auto x = se.find(before[tmp]);
            if (x != se.end()) {
                se.erase(x);
                se.insert(tmp);
            }
        }
    }
    cout << n - 6*cnt << endl;


    return 0;
}
