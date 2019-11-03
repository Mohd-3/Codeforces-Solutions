#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int n;
ll arr[200001];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n==2) {
        cout << (arr[0] == arr[1] ? "YES\n" : "NO\n");
        return 0;
    }
    for (int i = 1; i < n-1; ++i) {
        if (arr[i] == arr[i-1] || arr[i] == arr[i+1]) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}

