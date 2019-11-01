#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, cnt, idx1, idx2, arr[100001], srt[100001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        srt[i] = arr[i];
    }
    sort(srt, srt+n);
    for (int i =0 ; i < n; ++i) {
        if (arr[i] != srt[i]) {
            if (!cnt) {
                idx1 = i;
            } else if (cnt == 1) {
                idx2 = i;
            } else {
                cout << "NO" << endl;
                return 0;
            }
            cnt++;
        }
    }
    if (cnt == 2) {
        swap(arr[idx1], arr[idx2]);
        if (arr[idx1] == srt[idx1] && arr[idx2] == srt[idx2]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << (cnt ? "NO" : "YES") << endl;
    return 0;
}




