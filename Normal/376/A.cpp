#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
ll p, sum;
int main() {
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '^') {
            p = i;
        }
    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] <= '9' && s[i] >= '1') {
            sum += (int)(s[i]-'0')*(i-p);
        }
    }
    cout << (sum == 0 ? "balance" : (sum > 0 ? "right" : "left")) << endl;

    return 0;
}

