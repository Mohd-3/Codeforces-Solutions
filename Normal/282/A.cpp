#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int x, n;
string s;
int main() {
    IOS;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[0] == '+' || s[2] == '+') {
            x++;
        } else {
            x--;
        }
    
    }
    cout << x << endl;

    return 0;
}

