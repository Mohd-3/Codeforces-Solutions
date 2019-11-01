#include <bits/stdc++.h>
using namespace std;

string s;
int n, mx;
unordered_map<string, int> m;
int main() {
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    n = (int)s.length();
    string ans;
    for (int i = 2; i < n-7; ++i) {
        if (s[i] == '-') {
            if (s[i-1] >= '0' && s[i-1]  <= '9' && s[i-2] <= '9' && s[i-2] >= '0' &&
                    s[i+1] <= '9' && s[i+1] >= '0' && s[i+2] <= '9' && s[i+2] >= '0' &&
                    s[i+3] == '-' && s[i+4] == '2' && s[i+5] == '0' && s[i+6] == '1' && s[i+7] >= '3' && s[i+7] <= '5') {
                string date = s.substr(i-2, 10);
                if (date[0] == '3' && date[1] == '1') {
                    if ((date[3] == '0' && (date[4] == '2' ||  date[4] == '4' || date[4] == '6' || date[4] == '9')) || (date[3] == '1' && date[4] == '1')) {
                        
                        continue;
                    }
                } else if ((stoi(date.substr(0, 2)) >= 29 && date[3] == '0' && date[4] == '2') || stoi(date.substr(0, 2)) == 0 || stoi(date.substr(3, 2)) == 0) {
                    continue;
                }
                if (!m.count(date)) {
                    m[date] = 1;
                } else {
                    m[date]++;
                }
                if (m[date] > mx) {
                    mx = m[date];
                    ans = date;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

