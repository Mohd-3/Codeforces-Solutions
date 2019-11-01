#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
int opn=-1, cls=-1, cln1=-1, cln2=-1, sz;
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='[' &&opn==-1) {
            opn=i;
            sz++;
        } else if (s[i]==':' && opn!=-1 && cln1==-1) {
            cln1=i;
            sz++;
            break;
        }
    }
    for (int i = s.size()-1; ~i; --i) {
        if (s[i]==']' && cls==-1) {
            if (i < opn) {
                break;
            }
            cls = i;
            sz++;
        } else if (s[i]==':' && cls!=-1) {
            cln2=i;
            sz++;
            break;
        }
    }
    if (cln2<=cln1) {
        cout << -1 << endl;
        return 0;
    }
    if (opn==-1||cls==-1||cln1==-1) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = cln1+1; i < cln2; ++i) {
        if (s[i]=='|')
            sz++;
    }
    cout << sz << endl;

    
    return 0;
}





