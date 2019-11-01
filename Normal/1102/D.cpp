#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, zero, one, two;
string s;
deque<int> z, o, t;
int main()
{
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='0') {
            z.push_back(i);
            zero++;
        } else if (s[i]=='1') {
            o.push_back(i);
            one++;
        } else {
            t.push_back(i);
            two++;
        }
    }
 
    if (zero == one && zero == two) {
        cout << s << endl;
        return 0;
    }
    while (one > n/3 && two < n/3) {
        int idx = o.back();
        o.pop_back();
        s[idx] = '2';
        one--;
        two++;
    }
    while (one > n/3 && zero < n/3) {
        int idx = o.front();
        o.pop_front();
        s[idx] = '0';
        zero++;
        one--;
    }
    while (two > n/3 && zero < n/3) {
        int idx = t.front();
        t.pop_front();
        s[idx] = '0';
        zero++;
        two--;
    }
    while (two > n/3 && one < n/3) {
        int idx = t.front();
        t.pop_front();
        s[idx] = '1';
        one++;
        two--;
    }
    while (zero > n/3 && two < n/3) {
        int idx = z.back();
        z.pop_back();
        s[idx] = '2';
        two++;
        zero--;
    }
    while (zero > n/3 && one < n/3) {
        int idx = z.back();
        z.pop_back();
        s[idx] = '1';
        one++;
        zero--;
    }
    cout << s << endl;

    return 0;
}
