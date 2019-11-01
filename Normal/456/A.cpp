#include <bits/stdc++.h>
using namespace std;

int com (const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}
int n, x, y;
vector<pair<int, int>> v;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), com);
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].first > i+1) {
            puts("Happy Alex");
            return 0;
        }
    }
    puts("Poor Alex");
    return 0;
}
