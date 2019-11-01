#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int fr1[26], fr2[26];
int main() {
    cin.sync_with_stdio(0);
    cin.tie(NULL);
    cin >> s1 >> s2;
    if (s1.length() != s2.length()) {
        puts("NO");
        return 0;
    }
    int diff = 0;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i])
            diff++;
        fr1[s1[i]-'a']++;
        fr2[s2[i]-'a']++;
    }
    if (diff > 2) {
        puts("NO");
        return 0;
    }
    for (int i = 0; i < 26; ++i) {
        if (fr1[i] != fr2[i]) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");

    return 0;
}

