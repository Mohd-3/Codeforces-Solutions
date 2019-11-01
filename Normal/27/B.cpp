#include <bits/stdc++.h>
using namespace std;
int n, arr[52], cnt[52], a, b;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n*(n-1)/2-1; ++i) {
        scanf("%d %d", &a, &b);
        arr[b] = max(arr[b], arr[a]+1);
        cnt[a]++;
        cnt[b]++;
    }
    int idx1 = -1, idx2 = -1;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] > 0 && cnt[i] < n-1) {
            if (idx1 != -1) {
                idx2 = i;
                break;
            } else {
                idx1 = i;
            }
        }
    }
    if (arr[idx1] < arr[idx2]) {
        a = idx1;
        b = idx2;
    } else {
        a = idx2;
        b = idx1;
    }
    printf("%d %d\n", a, b);
    return 0;
}

