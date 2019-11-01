#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 2; i <= n; ++i) {
        if (n%i==0) {
            reverse(s.begin(), s.begin()+i);
        }
    }
    cout << s << endl;


    
    return 0;
}



