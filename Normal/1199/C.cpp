#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
ll sz, arr[400001];
map<int, int> fr;
int main() {
    //freopen("darwin.in", "r", stdin);
    IOS
   cin >> n >> sz;
   for (int i = 0; i < n; ++i) {
       cin >> arr[i];
   }
   sort(arr, arr+n);
   sz *= 8;
   sz/=n;
   int K = 0;
   if (sz>30) {
    K = INT_MAX;
   } else {
    K = 1<<sz;
   }
 
   int i = 0, cur = 0, bst = 0;
   for (int j = 0; j < n; ++j) {
        if (!fr[arr[j]]) {
            cur++;
 
        }
         fr[arr[j]]++;
        while (cur > K) {
            if (fr[arr[i]] == 1) {
                cur--;
            }
            fr[arr[i]]--;
            i++;
        }
        while (j+1 < n && arr[j+1] == arr[j]) {
            j++;
            fr[arr[j]]++;
        }
        bst = max(bst, j-i+1);
 
   }
   cout << n-bst << endl;
 
 
    return 0;
 
 
}