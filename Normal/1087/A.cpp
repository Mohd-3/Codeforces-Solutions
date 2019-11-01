#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

string s;
int n, start;
int main() {
    IOS;
    cin >> s;
    n = s.size();
    if (n&1) {
        start = n>>1;
    } else {
        start = (n>>1)-1;
    }
    cout << s[start];
    int i = start+1, j = start-1;
    while (j >= 0 && i < n) {
        cout << s[i++] << s[j--];
    }
    if (i < n) {
        cout << s[i];
    }
    if (j == 0)
        cout << s[j];
    cout << endl;


    return 0;
}

