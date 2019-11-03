#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int n;
ll arr[200001];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    int diff = 0;
    for (int i = 0; i  < n; ++i) {
        cin >> arr[i];
        if (i != 0 && arr[i] != arr[i-1])
            diff++;
    }
    if (!diff) {
        cout << "YES\n";
        return 0;
    }
    for (int i = 1; i < n-1; ++i) {
        if ((arr[i]&1) != (arr[i-1]&1) && (arr[i]&1) != (arr[i+1]&1) && ((i ==n-2 && arr[i-1] != arr[i-2]) || (i==1 && arr[i+1] != arr[i+2]))) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}

