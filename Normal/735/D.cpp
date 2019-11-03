#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;
vector<ll> v;

void fact() {
    while (n%2==0) {
        n>>=1;
        v.add(2);
    }
    for (int i = 3; i*i <= n; i+=2) {
        while (n%i==0) {
            v.add(i);
            n/=i;
        }
    }
    if (n!=1) {
        v.add(n);
    }
}
int main() {
    IOS
    cin >> n;
    fact();
    cout << v.size() << endl;

    
    return 0;
}





