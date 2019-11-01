#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, o, c;
string s;
int main() {
    IOS
    cin >> n >> k >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='(') {
            o++;
        } else if (s[i]==')') {
            c++;
        }
    }
    k>>=1;
    for (int i = n-1; ~i; --i) {
        if (s[i]=='(' and o > k) {
            s[i]='.';
            o--;
        } else if (s[i]==')' and c > k) {
            s[i]='.';
            c--;
        }
        if (o==k and c==k)
            break;
    }
    for (int i = 0; i < n; ++i)  {
        if (s[i]!='.') {
            cout << s[i];
        }
    }
    cout << endl;

    
    return 0;
}






