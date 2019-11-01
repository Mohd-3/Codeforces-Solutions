#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
char arr[] = {'a', 'b', 'c', 'd'};
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << arr[i%4];
    }
    cout << endl;

    return 0;
}
