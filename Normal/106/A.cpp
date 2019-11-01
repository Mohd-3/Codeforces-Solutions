#include <bits/stdc++.h>
using namespace std;

string t, s1, s2;
int main() {
    cin >> t >> s1 >> s2;
    map<char, int> m;
    m.insert(pair<char, int> ('T', 10));
    m.insert(pair<char, int> ('J', 11));
    m.insert(pair<char, int> ('Q', 12));
    m.insert(pair<char, int> ('K', 13));
    m.insert(pair<char, int> ('A', 14));
    if (s1[1] == s2[1]) {
        char c1 = s1[0], c2 = s2[0];
        int one, two;
        if (c1 < '0' || c1 > '9') {
            one = m[c1];
        } else
            one = (int)c1-'0';
        if (c2 < '0' || c2 > '9') {
            two = m[c2];
        } else {
            two = (int)c2-'0';
        }
        printf("%s\n", one > two ? "YES" : "NO");
    } else if (s1[1] == t[0]) {
        printf("YES\n"); 
    } else {
        printf("NO\n");
    }
    return 0;
}

