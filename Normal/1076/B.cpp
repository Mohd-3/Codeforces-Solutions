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

ll n, sq, cnt;
vi primes;
bool isPrime(ll x) {
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    if (x%2 == 0 || x%3 == 0) return 0;
    for (ll i = 5; i*i <= x; i+=6) {
        if (x%i == 0 || x%(i+2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    cin >> n;
    if (isPrime(n)) {
        cout << "1\n";
        return 0;
    }
    sq = sqrt(n);
    if (sq * sq == n && isPrime(sq)) {
        n-=sq;
        cnt++;
    }
    primes.add(3);
    primes.add(5);
    primes.add(7);
    primes.add(11);
    primes.add(13);
    primes.add(17);
    while (n&1) {
        cnt++;
        for (auto p : primes) {
            if (n%p==0) {
                n-= p;
                break;
            }
        }
    }
    ll tmp = n/2;
    n -= tmp*2;
    cnt += tmp;
    if (!n) {
        cout << cnt << endl;
        return 0;
    }
    if (isPrime(n)) {
        cout << cnt+1 << endl;
    }
    cout << n << " " << cnt;
    return 0;
}



