#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2;
int n, m, fr1[26], fr2[26], q, ans;

int isGood() {
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (fr1[i] > fr2[i]) {
            return 1e9;
        }
        if (fr1[i] < fr2[i]) {
            cnt += fr2[i]-fr1[i];
        }
    }
    return cnt;
}

int main() {
    IOS
    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();
    if (m > n) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < m; ++i) {
        fr2[s2[i]-'a']++;
        if (s1[i]=='?') {
            q++;
        } else {
            fr1[s1[i]-'a']++;
        }
    }
    int i = 0;
    if (isGood() <= q) {
        ans++;
    }
    for (int j = m; j < n; ++j) {
        if (s1[j] == '?') {
            q++;
        } else {
            fr1[s1[j]-'a']++;
        }
        if (s1[i]=='?') {
            q--;
        } else {
            fr1[s1[i]-'a']--;
        }
        i++;
        if (isGood() <= q) {
            ans++;
        }
    }
    cout << ans << endl;



    return 0;
}
