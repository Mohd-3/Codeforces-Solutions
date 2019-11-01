#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

string ans;
int n, tmp, lst;
deque<int> q;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        q.push_back(tmp);
    }
    while (!q.empty()) {
        int lft = q.front(), rgt = q.back();
        if (lft < lst && rgt < lst) {
            break;
        } else if (lft < lst) {
            lst = rgt;
            q.pop_back();
            ans += 'R';
        } else if (rgt < lst) {
            lst = lft;
            q.pop_front();
            ans += 'L';
        } else {
            if (lft < rgt) {
                ans += 'L';
                lst = lft;
                q.pop_front();
            } else {
                lst = rgt;
                ans += 'R';
                q.pop_back();
            }
        }

    }
    cout << ans.size() << endl;
    cout << ans << endl;






    return 0;
}