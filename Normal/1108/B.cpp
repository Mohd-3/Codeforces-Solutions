#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

int n, arr[200], fr[10001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    sort(arr, arr+n, greater<int>());
    int a = arr[0], b=0;
    for (int i = 1; i < n; ++i) {
        if (a%arr[i]!=0 || (a%arr[i]==0 && fr[arr[i]]==2)) {
            b = arr[i];
            break;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}


