#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, m;
ll arr[100001];
int main() {
    IOS
    cin >> n >> k >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int mx = arr[n-1];
    int i = 0;
    while (arr[i] != mx && m > 0) {
        i++;
        m--;
    }
    int st = i;
    if (m > 0) {
        while (i < n && m>0) {
            arr[i++]+= k;
            m--;
        }
    }
    double sm = 0;
    i = st;
    for (; st < n; ++st) {
        sm += arr[st];
    }
    cout.precision(6);
    cout << fixed << sm / (n-i) << endl;


    
    
    return 0;
}










