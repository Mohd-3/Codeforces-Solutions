#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

pair<int, int> arr[1000];
int n, ans[6];
int main()
{
    //IOS
    //freopen("kepler.in", "r", stdin);
    arr[32] = make_pair(4, 8);
    arr[966] = make_pair(23, 42);
    arr[60] = make_pair(4, 15);
    arr[64] = make_pair(4, 16);
    arr[92] = make_pair(4, 23);
    arr[168] = make_pair(4, 42);
    arr[120] = make_pair(8, 15);
    arr[128] = make_pair(8, 16);
    arr[184] = make_pair(8, 23);
    arr[336] = make_pair(8, 42);
    arr[240] = make_pair(15, 16);
    arr[345] = make_pair(15, 23);
    arr[630] = make_pair(15, 42);
    arr[368] = make_pair(16, 23);
    arr[672] = make_pair(16, 42);

    cout << "? 1 2" << endl;
    fflush(stdout);
    cin >> n;
    auto p1 = arr[n];
    cout << "? 1 3" << endl;
    fflush(stdout);
    cin >> n;
    auto p2 = arr[n];
    if (p1.first == p2.first) {
        ans[0] = p1.first;
        ans[1] = p1.second;
        ans[2] = p2.second;
    } else if (p1.second == p2.second) {
        ans[0] = p1.second;
        ans[1] = p1.first;
        ans[2] = p2.first;
    } else if (p1.first == p2.second) {
        ans[0] = p1.first;
        ans[1] = p1.second;
        ans[2] = p2.first;
    } else if (p1.second == p2.first) {
        ans[0] = p1.second;
        ans[1] = p1.first;
        ans[2] = p2.second;
    }
    cout << "? 4 5" << endl;
    fflush(stdout);
    cin >> n;
    p1 = arr[n];
    cout << "? 4 6" << endl;
    fflush(stdout);
    cin >> n;
    p2 = arr[n];
    if (p1.first == p2.first) {
        ans[3] = p1.first;
        ans[4] = p1.second;
        ans[5] = p2.second;
    } else if (p1.second == p2.second) {
        ans[3] = p1.second;
        ans[4] = p1.first;
        ans[5] = p2.first;
    } else if (p1.first == p2.second) {
        ans[3] = p1.first;
        ans[4] = p1.second;
        ans[5] = p2.first;
    } else if (p1.second == p2.first) {
        ans[3] = p1.second;
        ans[4] = p1.first;
        ans[5] = p2.second;
    }
    cout << "!";
    for (int i = 0; i < 6; ++i) {
        cout << " " << ans[i];
    }
    cout << endl;
    fflush(stdout);

    return 0;
}
