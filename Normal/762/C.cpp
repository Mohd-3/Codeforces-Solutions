#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2, lft="", rgt="", l="", r="";
int n, m;
int main()
{
    IOS

    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();
    int i = 0, j = 0;
    int lst = 0;
    while (i < m) {
        while (s1[j] != s2[i] && j < n) {
            j++;
        }
        if (j==n) {
            break;
        }
        lft.push_back(s2[i++]);
        lst = j;
        j++;

    }
    i = m-1, j = n-1;

    while (~i) {
        while (s1[j] != s2[i] && j>lst) {
            j--;
        }
        if (j <= lst) {
            break;
        }
        rgt.push_back(s2[i--]);
        j--;
    }
    i = m-1, j = n-1;
    while (~i) {
        while (s1[j] != s2[i] && ~j) {
            j--;
        }
        if (j<0) {
            break;
        }
        r.push_back(s2[i--]);
        lst = j;
        j--;
    }
    i = 0, j = 0;
    while (i < m) {
        while (s1[j] != s2[i] && j < lst) {
            j++;
        }
        if (j>= lst) {
            break;
        }
        l.push_back(s2[i++]);
        j++;
    }

    if (lft.empty() && rgt.empty()) {
        cout << "-" << endl;
        return 0;
    }
    reverse(rgt.begin(), rgt.end());
    reverse(r.begin(), r.end());
    string ans1 = lft+rgt;
    string ans2 = l+r;
    if (ans1.size() > ans2.size()) {
        cout << ans1 << endl;
    } else {
        cout << ans2 << endl;
    }






    return 0;

}
