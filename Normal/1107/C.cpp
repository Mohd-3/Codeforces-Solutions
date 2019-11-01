#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, a[200001];
ll sm;
string s;
priority_queue<int> q;
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (i==0) {
            q.push(a[i]);
        } else {
            if (s[i]==s[i-1]) {
                q.push(a[i]);
            } else {
                int x = 0;
                while (!q.empty() && x < k) {
                    sm += q.top();
                    q.pop();
                    x++;
                }
                while (!q.empty()) {
                    q.pop();
                }
                q.push(a[i]);
            }
        }
    }
    int x = 0;
    while (!q.empty() && x < k) {
        sm += q.top();
        q.pop();
        x++;
    }
    cout << sm << endl;



    
    return 0;
}









