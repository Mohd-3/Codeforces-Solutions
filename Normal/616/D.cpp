#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[500001], fr[1000001], mx = -1, cur, idx1, idx2;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int i = 0;
    for (int j = 0; j < n; ++j) {
        if (!fr[arr[j]]) {
            cur++;
        }
        fr[arr[j]]++;
        while (cur > k) {
            if (fr[arr[i]]==1) {
                cur--;
            }
            fr[arr[i]]--;
            i++;
        }
        if (j-i > mx) {
            mx = j-i;
            idx1 = i+1;
            idx2 = j+1;
        }
    }
    cout << idx1 << " " << idx2 << endl;



    return 0;
}
