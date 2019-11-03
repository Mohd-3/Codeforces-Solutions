#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, r, arr[1001], cnt;
string op;

void light(int x) {
    int l = max(0, x-r+1);
    int rr = min(n-1, x+r-1);
    for (int i = l; i <= rr; ++i) {
        if (!arr[i]) {
            arr[i] = 2;
        }
    }
}

bool good() {
    for (int i = 0; i < n; ++i) {
        if (!arr[i]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    IOS
    cin >> n >> r;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (!arr[i]) {
            for (int j = min(n-1, i+r-1); j>i; --j) {
                if (arr[j]==1) {
                    light(j);
                    cnt++;
                    break;

                }
            }
            if (!arr[i]) {
                for (int j = i-1; j >= max(0, i-r+1); --j) {
                    if (arr[j]==1) {
                        light(j);
                        cnt++;
                        break;
                    }
                }
            }

        }
    }
    if (good()) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
