#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

struct comp1 {
    bool operator() (const pair<pair<int, int>, pair<int, int>>& a, const pair<pair<int, int>, pair<int, int>>&b) const {
        if (a.first.second == b.first.second) {
            if (a.second.first == b.second.first) {
                return a.first.first < b.first.first;
            }
            return a.second.first < b.second.first;
        }
        return a.first.second < b.first.second;
    }
};

struct comp2 {
    bool operator() (const pair<pair<int, int>, pair<int, int>>& a, const pair<pair<int, int>, pair<int, int>>&b) const {
        if (a.second.first == b.second.first) {
            if (a.first.second == b.first.second) {
                return a.first.first < b.first.first;
            }
            return a.first.second < b.first.second;
        }
        return a.second.first < b.second.first;
    }
};
int n;
pair<pair<int, int>, pair<int, int>> arr[50001];
set<pair<pair<int, int>, pair<int, int>>> se;
set<pair<pair<int, int>, pair<int, int>>, comp1> se2;
set<pair<pair<int, int>, pair<int, int>>, comp2> se3;
bool used[500001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &arr[i].first.first, &arr[i].first.second, &arr[i].second.first);
        arr[i].second.second = i+1;
        se.insert(arr[i]);
        se2.insert(arr[i]);
        se3.insert(arr[i]);
    }
    vector<pair<int, int>> ans;

    while (!se.empty()) {
        auto it = se.begin();
        auto p = *it;
        se.erase(it);
        if (used[p.second.second]) {
            continue;
        }
        int mn = 1e9, idx=-1, tmp;
        set<pair<pair<int, int>, pair<int, int>>>::iterator it2;
start:
        if (!se2.empty()) {
            auto p1 = *se2.begin();
            if (p1 == p || used[p1.second.second] || (!se.empty() && p1 == *se.begin())) {
                se2.erase(se2.begin());
                goto start;
            }
            int cur = abs(p.first.first - p1.first.first) + abs(p.first.second - p1.first.second) + abs(p.second.first - p1.second.first);
            if (cur < mn) {
                mn = cur;
                it2 = se2.begin();
                idx = p1.second.second;
                tmp = 2;
            }
        }
start2:
        if (!se3.empty()) {
            auto p1 = *se3.begin();
            if (p1 == p || used[p1.second.second] || (!se2.empty() && *se3.begin() == *se2.begin()) || (!se.empty() && p1 == *se.begin())) {
                se3.erase(se3.begin());
                goto start2;
            }
            int cur = abs(p.first.first - p1.first.first) + abs(p.first.second - p1.first.second) + abs(p.second.first - p1.second.first);
            if (cur < mn) {
                mn = cur;
                it2 = se3.begin();
                idx = p1.second.second;
                tmp = 3;
            }
        }
start3:
        if (!se.empty()) {
            auto p1 = *se.begin();
            if (used[p1.second.second]) {
                se.erase(se.begin());
                goto start3;
            }
            int cur = abs(p.first.first - p1.first.first) + abs(p.first.second - p1.first.second) + abs(p.second.first - p1.second.first);
            if (cur < mn) {
                mn = cur;
                it2 = se.begin();
                idx = p1.second.second;
                tmp = 1;
            }
        }
        if (idx == -1) {
             break;
        }
        ans.emplace_back(p.second.second, idx);
        used[p.second.second] = used[idx] = true;
        if (tmp == 1) {
            se.erase(it2);
        } else if (tmp == 2) {
            se2.erase(it2);
        } else if (tmp == 3){
            se3.erase(it2);
        }
    }
    for (auto p : ans) {
        printf("%d %d\n", p.first, p.second);
    }
    return 0;
}



