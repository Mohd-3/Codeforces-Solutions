#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, arr[200001];
string pre, l, r;
int main() {
    //freopen("darwin.in", "r", stdin);
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int i = 0, j = n-1, lst = 0;
    while (i <= j) {
        if (arr[i] <= lst) {
            while (j > i && arr[j] > lst) {
                lst = arr[j];
                pre.push_back('R');
                j--;
            }
            break;
        }
        if (arr[j] <= lst) {
            while (i < j && arr[i] > lst) {
                pre.push_back('L');
                lst = arr[i++];
            }
            break;
        }
        if (arr[i] == arr[j] && i != j) {
            int lst2 = lst;
            int i2 = i;
            while (i2 < j && arr[i2] > lst2) {
                l.push_back('L');
                lst2 = arr[i2++];
            }
            while (j > i && arr[j] > lst) {
                r.push_back('R');
                lst = arr[j--];
            }
            break;
        } else {
            if (arr[i] < arr[j]) {
                pre.push_back('L');
                lst = arr[i++];
            } else {
                pre.push_back('R');
                lst = arr[j--];
            }
        }
    }
    if (l.size() > r.size()) {
        pre += l;
    } else {
        pre += r;
    }
    cout << pre.size() << endl;
    cout << pre << endl;
 
 
 
    return 0;
 
 
}