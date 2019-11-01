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

int n, idx;
string s;
int main() {
    IOS;
    cin >> n >> s;
    idx = n-1;
    range(i, n-1) {
        if (s[i] > s[i+1]) {
            idx = i;
            break;
        }
    }
    s.replace(idx, 1, "");
    cout << s << endl;
    return 0;
}

