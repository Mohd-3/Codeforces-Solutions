#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[2];
string s;
int main()
{
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        arr[s[i]%2]++;
    }
    cout << (arr[0]==arr[1] ? "Friendship" : (arr[0] < arr[1] ? "Anton" : "Danik")) << endl;
    return 0;
}
