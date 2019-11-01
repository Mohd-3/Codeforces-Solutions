#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[101];
string s;
int main() {
    IOS
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='x') {
            int tmp = 1;
            int j;
            for (j = i+1; j < n; ++j) {
                if (s[j]=='x')
                    tmp++;
                else
                    break;
            }
            cnt+= max(0, tmp-2);
            i=j;
        }
    }
    cout << cnt << endl;
    return 0;
}

