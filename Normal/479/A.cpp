#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int a, b, c, ans1, ans2;
int main() {
    IOS
    cin >> a >> b >> c;
    ans1 = max(a*b, a+b);
    ans2 = max(b*c, b+c);
    cout << max(max(ans1*c, ans1+c), max(ans2*a, ans2+a)) << endl;
    
    return 0;
}








