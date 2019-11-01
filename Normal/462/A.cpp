#include <bits/stdc++.h>

using namespace std;

int n;
char arr[101][101];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < n && arr[i][j] == 'o';
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int count = 0;
            for (int k = 0; k < 4; ++k) {
                int ni = i+dx[k];
                int nj = j+dy[k];
                if (isValid(ni, nj))
                    count++;
            }
            if (count&1) {
                puts("NO");
                return 0;
            }
        }
    }
    puts("YES");
    return 0;
}
