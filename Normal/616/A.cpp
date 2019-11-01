#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> s1 >> s2;
    int i = 0, j = 0;
    int n = s1.size(), m = s2.size();
    while (s1[i]=='0') {
        i++;
    }
    while (s2[j]=='0') {
        j++;
    }
    if (n-i != m-j) {
        cout << (n-i > m-j ? ">" : "<") << endl;
    } else {
        while (i < n) {
            if (s1[i] != s2[j]) {
                cout << (s1[i] > s2[j] ? ">" : "<") << endl;
                return 0;
            }
            i++;
            j++;
        }
        cout << "=" << endl;
    }



    return 0;
}
