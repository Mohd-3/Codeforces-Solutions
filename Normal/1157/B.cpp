#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
string s;
int arr[10];
int main() {
    IOS
    cin >> n >> s;
    for (int i = 1; i <= 9; ++i) {
        cin >> arr[i];
    }
    int st  =0, en = 0;
    for (int i = 0; i < s.size(); ++i) {
        int x = s[i]-'0';
        if (!st) {
            if (arr[x]>x) {
                st=1;
                cout << arr[x];
            } else {
                cout << x;
            }
        }
        else if (st && !en) {
            if (arr[x]<x) {
                en =1;
                cout << x;
            } else {
                cout << arr[x];
            }
        } else {
            cout << x;
        }

    }





    return 0;
}