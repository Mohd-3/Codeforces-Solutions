#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;
 int st1, st2;
char arr[3][11];
int main() {
    for (int i = 0; i < 3; ++i) {
        scanf("%s", arr[i]);
        for (int j = 0; j < 10; ++j) {
            if (arr[i][j] == '=') {
                st1 = i;
                st2 = j;
            }
        }
    }
    st2++;
    while (st2 < 10) {
        if (arr[st1][st2] != '.') {
            printf("%c", arr[st1][st2]);
            return 0;
        }
        st2++;
    }
    puts("You shall pass!!!");
     return 0;
}