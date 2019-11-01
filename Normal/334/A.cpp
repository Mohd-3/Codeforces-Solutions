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

int n;
int main() {
    IOS;
    cin >> n;
    n*=n;
    for (int j = 1, i = n; j < i; i-=2, j+=2) {
        cout << j << " " << i << " \n"[j+2>i-2];
    }
    for (int j = 2, i = n-1; j < i; i-=2, j+=2) {
        cout << j << " " << i << " \n"[j+2>i-2];
    }


    return 0;
}

