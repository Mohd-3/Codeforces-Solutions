#include <bits/stdc++.h>
#define fl(l, r) for(int i = (l); i < (r); ++i)
using namespace std;
int n;
string s;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    int right = n/2 + 1, left = 1;
    fl(0, n/2) {
        if (s[left-1] == 'R' && s[right-1] == 'L') {
            cout << right++ << " " << left++ << "\n";
        } else {
            cout << left++ << " " << right++ << "\n";
        }
    } 
    return 0;
}

