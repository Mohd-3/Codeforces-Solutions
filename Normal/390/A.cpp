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

int n, arr[101][101], x, y;
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }
    int h = 0, v = 0;
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            if (arr[i][j]) {
                h++;
                break;
            }
        }
    }
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            if (arr[j][i]) {
                v++;
                break;
            }
        }
    }
    printf("%d\n", min(v, h));
    return 0;
}

