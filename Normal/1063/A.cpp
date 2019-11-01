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

char s[100001];
int n;
int main() {
    IOS;
    cin >> n >> s;
    sort(s, s+n);
    cout << s << endl;
    return 0;
}

