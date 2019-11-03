#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

string s;
int arr[100001];
ll cnt = 1;
int main() {
    IOS
    cin >> s;
    int n = s.size();
    for (int i = 1; i < n-1; ++i) {
        if ((s[i]-'0') + (s[i-1]-'0') == 9) {
            arr[i]++;
        }
        if ((s[i]-'0') + (s[i+1]-'0') == 9) {
            arr[i]++;
        }
    }
    for (int i = 1; i < n-1; ++i) {
        if (arr[i]) {
            cnt *= arr[i];
        }
    }
    cout << cnt << endl;
    return 0;
}




