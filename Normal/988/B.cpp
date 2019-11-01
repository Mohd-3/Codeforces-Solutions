#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
string arr[101];

bool srt(const string& a, const string& b) {
    return a.size()<b.size();
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n, srt);
    for (int i = n-1; ~i; --i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i].find(arr[j])==string::npos) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
    
    return 0;
}



