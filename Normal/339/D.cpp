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

int n, q, tmp, tree[(1<<17)*2];

/*
void build() {
    int r = 0;
    for (int i = n-1; i > 0; --i) {
        if (!r) {
            tree[i] = tree[i<<1] | tree[i<<1 | 1];
        } else {
            tree[i] = tree[i<<1] ^ tree[i<<1 | 1];
        }
        r = !r;
    }
}
*/

void update(int p, int value) {
    p += n;
    tree[p] = value;
    int r = 0;
    for (int i = p; i > 1; i>>=1) {
        if (!r) {
            tree[i>>1] = tree[i] | tree[i^1];
        } else {
            tree[i>>1] = tree[i] ^ tree[i^1];
        } 
        r = !r;
    }
}

int main() {
    IOS;
    cin >> n >> q;
    n = 1 << n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        update(i, tmp);
    }
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        update(pos-1, val);
        cout << tree[1] << endl;
    }

    return 0;
}

