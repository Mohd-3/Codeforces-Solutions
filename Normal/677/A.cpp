    #include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, h, tmp, cnt;
int main()
{
    IOS
    cin >> n >> h;
    while (n--) {
        cin >> tmp;
        cnt += 1 + (tmp>h ? 1 : 0);
    }
    cout << cnt << endl;



    return 0;
}
