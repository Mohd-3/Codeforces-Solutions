#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s, ans;
int k, op, need, alpha, les, mor;
int main() {
    IOS
    cin >> s >> k;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='*' or s[i]=='?')
            op++;
    }
    alpha = s.size()-op;
    need = 0;
    les=0;
    mor=0;
    if (alpha<k) {
        need = k-alpha;
        les=1;
    } else if (alpha > k) {
        need = alpha-k;
        mor=1;
    }
    if (mor) {
        for (int i = 0; i < s.size(); ++i) {
            if (i>0 && need && (s[i]=='*' or s[i]=='?') && ans.size()>0) {
                ans.pop_back();
                need--;
            } else if(s[i]!='?'&&s[i]!='*'){
                ans.add(s[i]);
            }
        }
    } else if (les) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='*' && i>0 && need) {
                while (need) {
                    ans.add(s[i-1]);
                    need--;
                } 
            } else if (s[i]!='*'&&s[i]!='?') {
                ans.add(s[i]);
            }

        }
    } else {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!='?'&&s[i]!='*') {
                cout << s[i];
            }
        }
        cout << endl;
        return 0;
    }
    if (ans.size()==k) {
        cout << ans << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
    return 0;
}



