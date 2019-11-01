#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int a, b, c, m, p, cnt;
string s;
ll ans;
priority_queue<ll, vector<ll>, greater<ll>> usb, ps;
int main()
{
    IOS
    cin >> a >> b >> c;
    cin >> m;
    while (m--) {
        cin >> p >> s;
        if (s=="USB") {
            usb.push(p);
        } else {
            ps.push(p);
        }
    }
    while (a) {
        if (usb.empty()) {
            break;
        }
        cnt++;
        ans += usb.top();
        usb.pop();
        a--;
    }
    while (b) {
        if (ps.empty()) {
            break;
        }
        cnt++;
        ans += ps.top();
        ps.pop();
        b--;
    }
    while (c) {
        if (ps.empty() && usb.empty()) {
            break;
        }
        cnt++;
        c--;
        if (ps.empty()) {
            ans += usb.top();
            usb.pop();
        } else if (usb.empty()) {
            ans += ps.top();
            ps.pop();
        } else {
            if (usb.top() < ps.top()) {
                ans += usb.top();
                usb.pop();
            } else {
                ans += ps.top();
                ps.pop();
            }
        }
    }
    cout << cnt << " " << ans << endl;
    return 0;
}
