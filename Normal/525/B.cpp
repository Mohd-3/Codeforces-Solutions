#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s;
int m, tmp, n, arr[200002], en;
int main()
{
    IOS
    cin >> s >> m;
    n = (int) s.size();
    while (m--) {
        cin >> tmp;
        tmp--;
        en = n-(tmp+1);
        arr[tmp]++;
        arr[en+1]--;
    }
    for (int i = 1; i < n; ++i) {
        arr[i] += arr[i-1];
    }


    for (int i = 0; i < (n>>1); ++i) {
        if (arr[i]&1) {
            swap(s[i], s[n-(i+1)]);
        }
    }
    cout << s << endl;
    return 0;
}
