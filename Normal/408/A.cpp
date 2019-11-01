#include <bits/stdc++.h>
using namespace std;

int n, arr[101];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i  < n; ++i) {
        int num = arr[i];
        arr[i] *= 15;
        while (num--) {
            int tmp;
            cin >> tmp;
            arr[i] += tmp*5;
        }
    }
    int mn = 1e9;
    for (int i = 0; i < n; ++i) {
        mn = min(mn, arr[i]);
    }
    cout << mn << endl;
    return 0;
}

