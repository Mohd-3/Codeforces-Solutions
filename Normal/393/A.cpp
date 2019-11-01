#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define fl(e) for(int i = 0; i < (e); ++i)
#define flc(s, e, inc) for(int i = (s); i < (e); i+=(inc))
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a , int b) {
    return a < b ? a : b;
}
int abs(int a) {
    return a < 0 ? -a : a;
}

string s;
int n, e, t, i2;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    fl(s.length()) {
        if (s[i] == 'n')
            n++;
        else if (s[i] == 'i')
            i2++;
        else if (s[i] == 'e')
            e++;
        else if (s[i] == 't')
            t++;
    }
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << min((n-1)/2, min(e/3, min(i2, t)));
    return 0;
}

