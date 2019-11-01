#include <bits/stdc++.h>

using namespace std;

string s1, s2, s3;
int main() {
    ios_base::sync_with_stdio(0);
    cin >> s1 >> s2 >> s3;
    s1 = s1+s2;
    if (s1.length() != s3.length()) {
        cout << "NO\n";
        return 0;
    }
    int fr1[26], fr2[26];
    memset(fr1, 0, sizeof(fr1));
    memset(fr2, 0, sizeof(fr2));
    for (int i = 0; i < s1.length(); ++i)
        fr1[s1[i]-'A']++;
    for (int i = 0; i < s3.length(); ++i)
        fr2[s3[i]-'A']++;
    for (int i = 0; i < 26; ++i) {
        if (fr1[i] != fr2[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
