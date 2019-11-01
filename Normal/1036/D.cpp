#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, cnt;
ll arr[300001], arr2[300001];
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    ll suma = 0, sumb = 0;
    while (i < n) {
        cnt++;
        if (arr[i] == arr2[j]) {
            i++;
            j++;
            continue;
        }
        suma = arr[i++];
        sumb = arr2[j++];
        while (suma != sumb) {
            if (suma > sumb) {
                if (j >= m) {
                    break;
                }
                sumb += arr2[j++];
            } else if (sumb > suma) {
                if (i >= n) {
                    break;
                }
                suma += arr[i++];
            } else {
                break;
            }
        }

        if (suma != sumb) {
            cout << -1 << endl;
            return 0;
        }
    }
    if (i < n || j < m) {
            cout << -1 << endl;
            return 0;
        }
    cout << cnt << endl;
    return 0;
}
