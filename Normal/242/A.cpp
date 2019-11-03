#include <bits/stdc++.h>

using namespace std;

int x, y, a, b;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first < p2.first;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> x >> y >> a >> b;
    vector<pair<int, int>> v;
    while (a <= b) ++a;
    while (a <= x) {
        v.emplace_back(make_pair(a++, b));
    }
    a--;
    while (++b <= y && b < a) {
        v.emplace_back(make_pair(a, b));
    }
    if (v.empty()) {
        cout << 0 << "\n";
        return 0;
    }
    sort(v.begin(), v.end(), compare);
    cout << v.size() << "\n";
    for (auto p : v)
        cout << p.first << ' ' << p.second << "\n";

    return 0;
}