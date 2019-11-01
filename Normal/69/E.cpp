#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, arr[100001];
unordered_map<int, int> fr;
set<int> se;
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    for (int i = 0; i < k; ++i) {
        fr[arr[i]]++;
        if (fr[arr[i]]==1) {
            se.insert(arr[i]);
        } else {
            se.erase(arr[i]);
        }
    }
    if (se.empty()) {
        puts("Nothing");
    } else {
        printf("%d\n", *se.rbegin());
    }
    int i = 0, j = k;
    while (j < n) {
        fr[arr[j]]++;
        if (fr[arr[j]]==1) {
            se.insert(arr[j]);
        } else {
            se.erase(arr[j]);
        }
        fr[arr[i]]--;
        if (fr[arr[i]]==1) {
            se.insert(arr[i]);
        } else {
            se.erase(arr[i]);
        }
        i++;
        j++;
        if (se.empty()) {
            puts("Nothing");
        } else {
            printf("%d\n", *se.rbegin());
        }
    }

    return 0;
}
