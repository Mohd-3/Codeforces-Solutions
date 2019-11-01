#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, mx, arr[100001], fr[100001], tmp;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        if (fr[arr[i]]&1) {
            cout << "Conan\n";
            return 0;
        }
    }
    cout << "Agasa\n";
    
    return 0;
}










