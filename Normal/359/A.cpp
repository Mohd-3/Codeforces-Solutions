#include <bits/stdc++.h>
using namespace std;

int n, m, arr[51][51];
int main() {
    cin >> n >> m;
    int first = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            if ((i == 0 || j == 0 || i == n-1 || j == m-1) && arr[i][j] == 1)
                first = 1;
        }
    }
    cout << (first ? 2 : 4) << endl;
    
    return 0;
}

