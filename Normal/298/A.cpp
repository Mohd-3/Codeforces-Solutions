#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int main() {
    cin >> n >> s;
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '.' && idx1 == -1) {
            idx1 = i+1;
        }
        if (idx1 != -1 && s[i] != s[idx1-1]) {
            idx2 = i;
            if (s[i] == '.')
                idx2++;
            break;
        }
    }
    if (s[idx1-1] == 'R') {
        cout << idx1 << " " << (idx1 == idx2 ? idx2+1 : idx2) << endl;
    } else {
        cout << idx2-1 << " " << idx1-1 << endl;
    }
    return 0;
}

