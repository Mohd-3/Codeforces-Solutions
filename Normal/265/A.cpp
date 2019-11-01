#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main() {
    cin >> s1 >> s2;
    int i = 0;
    for (int j= 0; j < s2.length(); ++j) {
        if (s1[i] == s2[j]) {
            i++;
        }
    }
    cout << i+1 << endl;
    return 0;
}

