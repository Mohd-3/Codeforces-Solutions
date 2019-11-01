#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[5001], fr[5001];
vector<int> c[5001];
int main()
{
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
        if (fr[arr[i]]>k) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    int col = 1;
    for (int i = 1; i < 5001; ++i) {
        while (fr[i]--) {
            c[i].push_back(col);
            col++;
            if (col > k) {
                col = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << c[arr[i]].back() << " \n"[i==n-1];
        c[arr[i]].pop_back();
    }

    return 0;
}
