#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, o;
bool isPrime(int x) {
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    if (x%3==0 or x%2==0) return 0;
    for (int i = 5; i * i <= x; i+=6) {
        if (x%i == 0 or x%(i+2) == 0)
            return 0;
    }
    return 1;
}
int main() {
    IOS
    cin >> n;
    o = n;
    if (isPrime(n)) {
        cout << 1 << "\n" << n << endl;
        return 0;
    }
    while (!isPrime(n)) {
        n--;
    }
    for (int i = 2; i < 300; ++i) {
        if (isPrime(i)) {
            if (n+i==o) {
                cout << 2 << "\n" << n << " " << i << endl;
                return 0;
            }
            for (int j = 2; j < 300; ++j) {
                if (isPrime(j) and n+i+j==o) {
                    cout << 3 << "\n" << n << " " << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}



