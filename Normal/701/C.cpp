#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

int n, fr[600], tot;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (!fr[s[i]]) {
            tot++;
        }
        fr[s[i]]++;
    }
    memset(fr, 0, sizeof fr);
    int cur = 0, bst = 1e9, i = 0;
    for (int j = 0; j < n; ++j) {
        if (!fr[s[j]]) {
            cur++;
        }
        fr[s[j]]++;
        while (cur >= tot) {
            bst = min(bst, j-i+1);
            fr[s[i]]--;
            if (!fr[s[i++]]) {
                cur--;
            }
        }
    }
    cout << bst << endl;
    return 0;
}

