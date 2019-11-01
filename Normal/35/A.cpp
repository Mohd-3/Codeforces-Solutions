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

int start, arr[4], a, b;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &start);
    arr[start] = 1;
    fl(3) {
        scanf("%d %d", &a, &b);
        swap(arr[a], arr[b]);
    }
    fl(4) {
        if (arr[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}

