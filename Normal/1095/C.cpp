#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n, k;
priority_queue<int> q;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i <= 30; ++i) {
        if (n&(1<<i)) {
            q.push(1<<i);
        }
    }
    if (k > n || k < q.size()) {
        cout << "NO\n";
        return 0;
    }
    while (k > q.size()) {
        int tmp = q.top();
        q.pop();
        q.push(tmp>>1);
        q.push(tmp>>1);
    }
    cout << "YES\n";
    while (!q.empty()) {
        int tt = q.top();
        q.pop();
        cout << tt << " \n"[q.empty()];
    }



    return 0;
}
