#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, tmp;
priority_queue<int> a, b;
ll aa, bb; 
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >>tmp;
        a.push(tmp);
    }
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        b.push(tmp);
    }
    int t = 1;
    while (!a.empty() or !b.empty()) {
        if (t) {
            t = !t;
            if (!a.empty() and !b.empty()) {
                if (a.top() > b.top()) {
                    aa += a.top();
                    a.pop();
                } else {
                    b.pop();
                }
            } else if (a.empty()) {
                b.pop();
            } else {
                aa += a.top();
                a.pop();
            }
        } else {
            t = !t;
            if (!a.empty() and !b.empty()) {
                if (b.top() > a.top()) {
                    bb += b.top();
                    b.pop();
                } else {
                    a.pop();
                }
            } else if (!b.empty()) {
                bb += b.top();
                b.pop();
            } else {
                a.pop();
            }
        }
    }
    cout << aa-bb << endl;
    
    return 0;
}






