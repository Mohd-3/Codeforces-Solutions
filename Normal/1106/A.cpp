#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

char arr[501][501];
int n, ans;

bool isValid(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < n and arr[i][j] == 'X'; 
}
int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n-1; ++i) {
        for (int j = 1; j < n-1; ++j) {
            if (arr[i][j] == 'X') {
                int cnt = 0;
                for (int k = 0; k < 4; ++k) {
                    int ni = i+dx[k];
                    int nj = j+dy[k];
                    if (isValid(ni, nj)) {
                        cnt++;
                    }
                }
                if (cnt == 4) {
                    ans++;
                }

            }
        }
    }
    cout << ans << endl;


    return 0;
}


