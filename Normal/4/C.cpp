#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
string s;
unordered_map<string, int> m;
int main() {
    IOS;
    cin >> n;
    while (n--) {
        cin >> s;
        if (m[s]) {
            cout << s << m[s] << endl;
        } else {
            cout << "OK" << endl;
        }
        m[s]++;
    }

    return 0;
}

