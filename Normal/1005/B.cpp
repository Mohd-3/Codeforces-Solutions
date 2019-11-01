#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s1, s2;
int main() {
    IOS
    cin >> s1 >> s2;
    int i = s1.size()-1, j = s2.size()-1;
    while (i>=0 && j >=0 && s1[i]==s2[j]) {
        --i;
        --j;
    }
    i++;
    j++;
    cout << i+j << endl;
    
    return 0;
}



