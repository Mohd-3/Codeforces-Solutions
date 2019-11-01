#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, q, arr[100001], a, b;
vector<int> ic, dc;
int main() {
    IOS
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i && arr[i] > arr[i-1]) {
            ic.emplace_back(i+1);
        } else if (i && arr[i] < arr[i-1]) {
            dc.emplace_back(i+1);
        }
    }
    while (q--) {
        cin >> a >> b;
        if (b-a <= 1) {
            cout << "Yes" << endl;
        } else {
            int lo = 0, hi = ic.size()-1, mid, idx1 = -1;
            while (lo <= hi) {
                mid = lo+((hi-lo)>>1);
                if (ic[mid] <= b && ic[mid]>a) {
                    idx1 = mid;
                    lo = mid+1;
                } else if (ic[mid] <= a) {
                    lo = mid+1;
                } else {
                    hi = mid-1;
                }
            }
            if (idx1 == -1) {
                cout << "Yes" << endl;
                continue;
            }
            lo = 0; hi = dc.size()-1; int idx2 = -1;
            while (lo<=hi) {
                mid = lo+((hi-lo)>>1);
                if (dc[mid] > a && dc[mid] <= b) {
                    idx2 = mid;
                    hi = mid-1;
                } else if (dc[mid] <= a) {
                    lo = mid+1;
                } else {
                    hi = mid-1;
                }
            }
            if (idx2 == -1) {
                cout << "Yes" << endl;
                continue;
            }
            cout << (ic[idx1] <= dc[idx2] ? "Yes" : "No") << endl;

        }
    }
    return 0;
}





