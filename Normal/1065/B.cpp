#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll m, arr[100001];
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> m;
    for (int i = 2; i < 100001; ++i) {
        arr[i] = (1LL*i*(i-1))>>1;
    }
    int i = 0;
    while (arr[i]<m) {
        i++;
    }


    cout << max(0LL, n-(m*2)) << " " << n-i << endl;

    return 0;
}
