#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;
int n;
string s;
int main() {
    IOS
    cin >> n >> s;
    int i = 0, c = 1;
    while (i < n) {
        cout << s[i];
        i+= c++;
    }
    cout << endl;

    return 0;
}
