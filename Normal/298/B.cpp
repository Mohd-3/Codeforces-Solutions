#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
ll st1, st2, en1, en2, cnt;
char arr[100001];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%lld%lld%lld%lld%s", &n, &st1, &st2, &en1, &en2, arr);
    int needX = 0, needY = 0;
    if (en1 > st1) {
        needX = 1;
    } else if (en1 < st1) {
        needX = -1;
    }
    if (en2 > st2) {
        needY = 1;
    } else if (en2 < st2) {
        needY = -1;
    }
    for (int i = 0; i < n; ++i) {
        if (st1 == en1 && st2 == en2) {
            break;
        }
        if (st1 == en1) {
            needX = 0;
        }
        if (st2 == en2) {
            needY = 0;
        }
        if (arr[i]=='W' && needX == -1) {
            cnt = i+1;
            st1--;
        } else if (arr[i] == 'E' && needX == 1) {
            cnt = i+1;
            st1++;
        } else if (arr[i] == 'N' && needY == 1) {
            cnt = i+1;
            st2++;
        } else if (arr[i] == 'S' && needY == -1) {
            cnt = i+1;
            st2--;
        }
    }
    if (st1 == en1 && st2 == en2) {
        printf("%lld\n", cnt);
    } else {
        puts("-1");
    }

    return 0;
}