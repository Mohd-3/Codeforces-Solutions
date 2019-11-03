#include <bits/stdc++.h>
using namespace std;

int n, arr[100001], ans[100001];
int main() {
    cin >> n;

    int x = 1;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int good = 1;
    ans[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i-1]) {
            ans[i] = ++x;
        } else if (arr[i] < arr[i-1])
            ans[i] = --x;
        else {
            if (5-x > x) {
                ans[i] = ++x;
            } else {
                ans[i] = --x;
            }
        }
    }
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (ans[i] == 0)
            idx = i;
    }
    if (idx != -1) {
        for (int i = 1; i < n; ++i) {
            ans[i]++;
            if (ans[i] > 5)
                good = 0;
        }
    }
    if (good) {
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " \n"[i == n-1];
        }
    } else {
        puts("-1");
    }
    return 0;
}

