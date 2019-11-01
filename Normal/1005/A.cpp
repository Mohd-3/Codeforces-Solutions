#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[1001];
vector<int> v;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i =1 ; i < n; ++i) {
        if (arr[i]==1) {
            v.add(arr[i-1]);
        } 
    }
    v.add(arr[n-1]);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " \n"[i==v.size()-1];
    }
    
    return 0;
}



