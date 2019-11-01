#include <bits/stdc++.h>
using namespace std;

int k;
string tmp;
int fr[10];
int main() {
    cin >> k;
    for (int i = 0; i < 4; ++i) {
        cin >> tmp;
        for (int j = 0; j < 4; ++j) {
            if (tmp[j] != '.') {
                fr[tmp[j]-'0']++;
            }
        }
    }
    for (int i = 1; i < 10; ++i) {
        if (fr[i] > k*2) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}

