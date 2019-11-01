#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int n, arr[101], total;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        if (arr[i] == -10000)
            continue;
        int bst = 1e9;
        int idx = -1;
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            if (abs(arr[i]-arr[j]) < bst) {
                bst = abs(arr[i]-arr[j]);
                idx = j;
            } 
        }
        arr[i] = arr[idx] = -10000;
        total += bst;
    }
    cout << total << endl;

    return 0;
}

