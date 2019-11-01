#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001], lft[100001], rgt[100001], mx;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        lft[i] = 1;
        rgt[i] = 1;
        if (i!=0 && arr[i] > arr[i-1]) {
            lft[i] = lft[i-1]+1;
        }
    }
    if (n==1) {
        puts("1");
        return 0;
    }
    if (n==2) {
        puts("2");
        return 0;
    }
    rgt[n-1] = 1;
    for (int i = n-2; ~i; --i) {
        if (arr[i] < arr[i+1]) {
            rgt[i] = rgt[i+1]+1;
        }
    }
    mx = max(mx, 1+rgt[1]);
    mx = max(mx, 1+lft[n-2]);
    if (arr[0] > arr[1]) {
        mx = max(mx, rgt[1]+1);
    }
    if (arr[n-1] < arr[n-2]) {
        mx = max(mx, lft[n-2]+1);
    }
    for (int i = 1; i < n-1; ++i) {
        if (arr[i+1]-arr[i-1]>1) {
            mx = max(mx, lft[i-1]+rgt[i+1]+1);
        }
        if (arr[i]<=arr[i-1]) {
            mx = max(mx, lft[i-1]+1);
        }
        if (arr[i] >=arr[i+1]) {
            mx = max(mx, rgt[i+1]+1);
        }
    }
    printf("%d\n", mx);
    return 0;
}
