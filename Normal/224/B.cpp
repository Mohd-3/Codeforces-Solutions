#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, fr[100001], arr[100001], mn = 1e9, cur, idx1=-1, idx2=-1;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int i = 0;
    for (int j = 0; j < n; ++j) {
        if (fr[arr[j]] == 0) {
            cur++;
        }
        fr[arr[j]]++;
        while (cur >= k) {
            if (j-i+1 < mn) {
                mn = j-i+1;
                idx1 = i+1;
                idx2 = j+1;
            }
            fr[arr[i]]--;
            if (fr[arr[i]]==0) {
                cur--;
            }
            i++;
        }
    }
    cout << idx1 << " " << idx2 << endl;



    return 0;
}
