    #include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200001];
string s;
stack<int> st;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> s;
    int r = 0, r2 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '{' || s[i] == '(') {
            arr[i] = r;
            r = !r;
        } else {
            arr[i] = r2;
            r2 = !r2;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
