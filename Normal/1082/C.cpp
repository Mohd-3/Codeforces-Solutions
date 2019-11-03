#include <bits/stdc++.h>
using namespace std;
int n, m, s, r;
pair<int, int> arr[100001];
vector<int> v[100001];
bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    return b.second < a.second;
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
       scanf("%d %d", &s, &r);
       arr[i] = make_pair(s-1, r);
    }
    sort(arr, arr+n, comp);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        pair<int, int> cur = arr[i];
        v[cur.first].push_back(cur.second);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 1; j < v[i].size(); ++j) {
            v[i][j] += v[i][j-1];
        }
    }
    int smm =0 ;
    for (int i = 0; i < n; ++i) {
        int sm = 0;
        for (int j = 0; j < m; ++j) {
            if (v[j].size() > i) {
                sm += v[j][i];
            }
        }
        smm = max(sm, smm);
    }
    printf("%d\n", smm);
    return 0;
}

