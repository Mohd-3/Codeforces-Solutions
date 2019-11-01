#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int x;
int main() {
    IOS;
    cin >> x;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= x; ++j) {
            if (i%j == 0 && i*j > x && i/j < x) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "-1\n";
    return 0;
}

