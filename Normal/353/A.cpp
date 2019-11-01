#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> v;
int main() {
    cin >> n;
    int sumUp = 0, sumDown = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        sumUp += x;
        sumDown += y;
        v.push_back(make_pair(x, y));
    }
    if (!(sumUp&1) && !(sumDown&1)) {
        puts("0");
        return 0;
    } 
    for (int i = 0; i < n; ++i) {
        if ((sumUp+v[i].second-v[i].first)%2 == 0 && (sumDown+v[i].first-v[i].second)%2 == 0) {
            puts("1");
            return 0;
        }
    }
    puts("-1");

    return 0;
}

