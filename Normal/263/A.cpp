#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int idx1, idx2, tmp;
int main() {
    IOS
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> tmp;
            if (tmp) {
                idx1 = i;
                idx2 = j;
                break;
            }
        }
    }
    cout << abs(idx1-2) + abs(idx2-2) << endl;
    
    return 0;
}








