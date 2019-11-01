#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, cnt, bst, i;
ll arr[200001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cnt = 1;
        int j =i;
        while (j < n-1 && arr[j+1] <= arr[j]<<1) {
            j++;
        }
        bst = max(bst, j-i+1);
        i = j;

    }
    cout << bst << endl;



    return 0;
}

