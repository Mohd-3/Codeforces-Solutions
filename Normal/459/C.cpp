#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, k, d, i, j, v[1000];
ll x=1;
int main() {
    IOS
	cin>> n >> k >> d;
    for (i=0; i < d && x < n; ++i)  {
        x *= k;
    }
    if (x < n) {
        cout << -1 << endl;
    } else {
        for (i=0; i<n; i++) {
            v[i]=i;
        }
		for (i=0; i<d; i++) {
			for (j=0; j<n; j++) {
				cout<<v[j]%k+1<<" ";
				v[j]/=k;
			}
			cout<<endl;
		}
	}
	return 0;
}



