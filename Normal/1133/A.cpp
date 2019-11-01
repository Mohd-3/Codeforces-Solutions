#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int h1, m1, h2, m2, h3, m3;
int main()
{
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    h3 = (h1+h2)>>1;
    if ((h1+h2)%2) {
        m3 = 30;
    }
    m3 += (m1+m2)>>1;
    if (m3>=60) {
        h3++;
        m3 %= 60;
    }
    if (h3>=24) {
        h3 -= 24;
    }
    if (h3 < 10) {
        printf("0");
    }
    printf("%d:", h3);
    if (m3 < 10) {
        printf("0");
    }
    printf("%d\n", m3);
    return 0;
}
