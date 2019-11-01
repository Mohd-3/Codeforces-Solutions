#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[200002], fr[200002], added[200001];
priority_queue<int, vector<int>, greater<int>> need;
int main() {
    IOS
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (fr[i]==0) {
            need.push(i);
        }
    }
    cout << need.size() << endl;
    for (int i = 1; i <= n; ++i) {
        if (fr[arr[i]]==1) {
            cout << arr[i] << " ";
            continue;
        }
        if (fr[arr[i]]>1 && (need.top() < arr[i] || added[arr[i]]==1)) {
            fr[arr[i]]--;
            cout << need.top() << " ";
            need.pop();
        } else {
            added[arr[i]]=1;
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}





