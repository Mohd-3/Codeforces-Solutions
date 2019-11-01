#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define fl(e) for(int i = 0; i < (e); ++i)
#define flc(s, e, inc) for(int i = (s); i < (e); i+=(inc))
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a , int b) {
    return a < b ? a : b;
}
int abs(int a) {
    return a < 0 ? -a : a;
}

int n, arr[101], a, b, x, y;
int main() {
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    arr[b]++;
    if (n == 1) {
        printf("%d\n", b-a);
        return 0;
    }
    fl(n-1){
       scanf("%d %d", &x, &y);
       arr[x]++;
       arr[y]--;
    }
    flc(1, 101, 1) {
        arr[i] += arr[i-1];
    }
    int cnt = 0;
    flc(a, b+1, 1) {
        if (arr[i] == 0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

