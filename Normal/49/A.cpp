#include <bits/stdc++.h>
using namespace std;
string s, v = "AOEIUYaoeiuy";
int n;

int main() {
    getline(cin, s);
    n = s.length();
    for (int i = n-1; ~i; --i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if (v.find(s[i]) != string::npos) {
                puts("YES");
                break;
            } else {
                puts("NO");
                break;
            }
        }
    }
    return 0;
}

