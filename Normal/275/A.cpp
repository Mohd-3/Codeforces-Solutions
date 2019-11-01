#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}, d;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < 3 && j >=0 && j < 3;
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &d);
            if (d&1) {
                arr[i][j] ^= 1;
                for (int k = 0; k < 4; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (isValid(ni, nj)) {
                        arr[ni][nj] ^= 1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j= 0; j < 3; ++j) {
            printf("%d", arr[i][j]);
        }
        puts("");
    }
    return 0;
}