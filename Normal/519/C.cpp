#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define nrange(i, s) for(int (i) = (s); ~i; --(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define cnrange(i, s, e, dec) for(int(i) = (s); (i) >= (e); (i)-=(dec))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int n, m, cnt;
int main() {
    IOS;
    cin >> n >> m;
    while (n > 0 && m > 0) {
        if (n > m) {
            if (n == 1)
                break;
            n-= 2;
            m--;
        } else {
            if (m == 1)
                break;
            m-= 2;
            n--;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

