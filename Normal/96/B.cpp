#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

vector<ll> v;
ll n;
string s;

void gen(int i = 0, int four = 0, int seven = 0, ll num = 0) {
    if (i == 11) {
        return;
    }
    if (four && four == seven) {
        v.emplace_back(num);
    }
    num *= 10;
    num += 4;
    gen(i+1, four+1, seven, num);
    num -= 4;
    num += 7;
    gen(i+1, four, seven+1, num);
}
int main()
{
    IOS
    cin >> n;
    gen();
    sort(v.begin(), v.end());
    cout << v[lower_bound(v.begin(), v.end(), n)-v.begin()] << endl;




    return 0;
}
