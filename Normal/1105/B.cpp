#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

string s;
int n, fr[26], k, arr[200001], mx;
int main() {
    IOS
    cin >> n >> k >> s;
    if (n==1) {
        if (k==1) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }
    for (int i =0; i < n; ++i) {
        arr[i]=1;
        if (i!= 0 && s[i]==s[i-1]) {
            arr[i] += arr[i-1];
        }
        if (arr[i]==k) {
            fr[s[i]-'a']++;
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 26; ++i) {
        mx = max(mx, fr[i]);
    }
    cout << mx << endl;


    
    return 0;
}






