#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, t;
string s;
queue<int> a, b;
int main() {
    IOS
    cin >> n >> s;
    for (int i =0; i < n; ++i) {
        if (s[i]=='8') {
            a.push(i);
        } else {
            b.push(i);
        }
    }
    while (n > 11) {
        if (!t) {
            if (!b.empty()) {
                b.pop();
            } else {
                cout << "YES" << endl;
                return 0;
            }

        } else {
            if (!a.empty()) {
                a.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        n--;
        t ^= 1;
    }
    if (b.empty()) {
        cout << "YES" << endl;
        return 0;
    }
    if (a.empty()) {
        cout << "NO" << endl;
        return 0;
    }
    if (a.front() < b.front()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}