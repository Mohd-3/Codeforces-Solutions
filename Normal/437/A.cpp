#include <bits/stdc++.h>
using namespace std;

vector<pair<string, string>> v;
int main() {
    for (int i = 0; i < 4; ++i) {
        string a;
        cin >> a;
        stringstream ss(a);
        string b;
        getline(ss, a, '.');
        getline(ss, b, '.');
        v.push_back(make_pair(a, b));
    }
    int count = 0;
    pair<string, string> ans;
    for (auto p : v) {
        int mx = 0, mn = 1e9;
        if (p.second.length() == 0)
            continue;
        for (auto pp : v) {
            if (p != pp) {
                mx = max(mx, (int)pp.second.length());
                mn = min(mn, (int)pp.second.length());
            }
        }
        if (p.second.length() <= mn/2 || p.second.length() >= mx*2) {
            count++;
            ans = p;
        }
    }
    if (count == 1) {
        cout << ans.first << endl;
    } else {
        puts("C");
    }
    return 0;
}

