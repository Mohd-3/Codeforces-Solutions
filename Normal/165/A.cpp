#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> v;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int right = 0, left = 0, upper=0, lower=0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {

                if (v[i].first < v[j].first && v[i].second == v[j].second)
                    right++;
                else if (v[i].first > v[j].first && v[i].second == v[j].second)
                    left++;
                else if (v[i].first == v[j].first && v[i].second < v[j].second)
                    lower++;
                else if (v[i].first == v[j].first && v[i].second > v[j].second)
                    upper++;
            
                if (right && left && upper && lower) {
                    count++;
                    break;
                }

            }
        }
    }
    cout << count << endl;
    return 0;
}

