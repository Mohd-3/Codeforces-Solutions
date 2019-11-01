#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

string s;
int sm;
int main() {
    IOS
    cin >> s;
    bool eq = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='=') {
            eq = true;
        } else if (s[i]=='|') {
            if (eq) {
                sm--;
            } else {
                sm++;
            }
        } 
    }
    if (sm==0) {
        cout << s << endl;
    } else if (sm==-2) {
        cout << '|';
        s.pop_back();
        cout << s << endl;
    } else if (sm==2) {
        if (s[1]=='|') {
            for (int i = 1; i < s.size(); ++i) {
                cout << s[i];
            }
            cout << '|';
        } else {
            cout << s[0] << s[1];
            for (int i = 3; i < s.size(); ++i) {
                cout << s[i];
            }
            cout << '|';
        } 
    } 
    else {
        cout << "Impossible\n";
    }
            
    return 0;
}


