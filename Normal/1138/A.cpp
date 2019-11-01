#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001], mx, fr[100001][3], fr2[1000001][3];
int main()
{

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[i][arr[i]]=1;
        fr2[i][arr[i]]=1;
        if (i != 0 && arr[i]==arr[i-1]) {
            fr[i][arr[i]] = fr[i-1][arr[i]]+1;
        }
    }
    for (int i = n-2; ~i; --i) {
        if (arr[i]==arr[i+1]) {
            fr2[i][arr[i]] = fr2[i+1][arr[i]]+1;
        }
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[i-1]) {
            mx = max(mx, min(fr2[i][arr[i]], fr[i-1][arr[i-1]])*2);

        }
    }
    cout << mx << endl;

    return 0;
}
