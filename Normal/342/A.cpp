#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, one, two, three, four, six, d;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        if (d == 7 || d == 5) {
            puts("-1");
            return 0;
        }
        if (d == 1) {
            one++;
        } else if (d == 2) {
            two++;
        } else if (d == 3) {
            three++;
        } else if (d == 4) {
            four++;
        } else if (d == 6) {
            six++;
        }
    }
    if (one == two+three && one == four+six && two >= four && three <= six) {
        for (int i = 0; i < n/3; ++i) {
            printf("1 ");
            if (two) {
                printf("2 ");
                two--;
                if (four) {
                    puts("4");
                    four--;
                } else {
                    puts("6");
                    six--;
                }
            } else {
                puts("3 6");
                three--;
                six--;
            }
        } 
    } else {
        puts("-1");
    }
    return 0;
}


