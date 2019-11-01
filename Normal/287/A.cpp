#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

char arr[4][4];
int main() {
    for (int i = 0; i < 4; ++i) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
        int a = 0, b = 0;
            if (arr[i][j] == '.') {
                a++;
            } else {
                b++;
            }
            if (arr[i+1][j] == '.') {
                a++;
            } else {
                b++;
            }
            if (arr[i][j+1] == '.') {
                a++;
            } else {
                b++;
            }
            if (arr[i+1][j+1] == '.') {
                a++;
            } else {
                b++;
            }
            if (min(a, b) < 2) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}


