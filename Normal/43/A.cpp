#include <bits/stdc++.h>
using namespace std;

bool comp (const pair<string, int> &a, const pair<string, int> &b) {
    return b.second < a.second;
}
vector<pair<string, int>> v;
map<string, int> m;
int n;
string tmp;
int main() {
    cin >> n;
    while (n--) {
        cin >> tmp;
        if (m.count(tmp))
            m[tmp]++;
        else
            m[tmp] = 1;
    }
    for (auto x = m.begin(); x != m.end(); ++x) {
        v.push_back(*x);
    }
    sort(v.begin(), v.end(), comp);
    cout << v[0].first << endl;
    return 0;
}

