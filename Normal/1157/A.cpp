#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;
int cnt;
int main() {
    IOS
    cin >> n;
    cnt += 10-(n%10);
    n/=10;
    while (n) {
        cnt += 10-((n%10)+1);
        n/=10;

    }
    cout << cnt+1 << endl;






    return 0;
}