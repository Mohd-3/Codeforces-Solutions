#include <bits/stdc++.h>
using namespace std;

int n, arr[1001];
vector<pair<int, int>> v;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    for (int i = 0; i < n-1; ++i) {
        v.push_back(make_pair(arr[i], arr[i+1]));
    }
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if (i != j && ((v[j].first < v[i].second && v[j].first > v[i].first && (v[j].second > v[i].second || v[j].second < v[i].first)) ||
                    (v[j].second < v[i].second && v[j].second > v[i].first && (v[j].first > v[i].second || v[j].first < v[i].first)) ||
                    (v[j].second > v[i].second && v[j].second < v[i].first && (v[j].first < v[i].second || v[j].first > v[i].first)) ||
                    (v[j].first > v[i].second && v[j].first < v[i].first && (v[j].second < v[i].second || v[j].second > v[i].first)))){
                printf("yes\n");
                return 0;
            }
        }
    }
    printf("no\n");
    return 0;
}

