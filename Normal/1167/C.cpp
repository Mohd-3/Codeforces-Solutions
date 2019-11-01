    #include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int parent[500002], sz[500002], n, m, k, a, b;

int find(int i) {
    if (parent[i]==i) {
        return i;
    }
    return parent[i] = find(parent[i]);
}

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i <= n; ++i) {
        parent[i]=i;
    }
    while (m--) {
        cin >> k;
        if (k==0) {
            continue;
        } else if (k==1) {
            cin >> a;
        } else {
            cin >> a >> b;
            parent[find(b)]=find(a);
            k -= 2;
            while (k-- > 0) {
                cin >> b;
                parent[find(b)] = find(a);
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        sz[find(i)]++;
    }
    for (int i = 1; i <= n; ++i) {
        cout << sz[find(i)] << " \n"[i==n];
    }
    return 0;
}
