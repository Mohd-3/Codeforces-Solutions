#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, vis[26];
vector<char> ans;
string arr[101], arr2[101];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    bool ok = 1;
    for (int i = 0; i < n; ++i) {
        if (arr[i]!=arr2[i]) {
            ok=0;
            break;
        }
    }
    if (ok) {
        cout << "abcdefghijklmnopqrstuvwxyz";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        if (vis[arr[i][0]-'a']&& arr[i-1][0]!=arr[i][0]) {
            cout << "Impossible\n";
            return 0;
        }
        if (!vis[arr[i][0]-'a']) {
            vis[arr[i][0]-'a']=1;
            ans.add(arr[i][0]);

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i].size() > arr[j].size() && arr[i].substr(0, arr[j].size())==arr[j]) {
                cout << "Impossible";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i].size()==arr[j].size() && arr[i][0]==arr[j][0]) {
                int k = 0;
                while (arr[i][k]==arr[j][k]) {
                    k++;
                }
                if (k<arr[i].size()) {
                    if (!vis[arr[i][k]-'a']) {
                        vis[arr[i][k]-'a']=1;
                        ans.add(arr[i][k]);
                    }
                    if (vis[arr[j][k]-'a']) {
                        cout << "Impossible";
                        return 0;
                    }
                }
            }
        }
    }
    for (auto x : ans) {
        cout << x;
    }
    for (int i =0 ; i < 26; ++i) {
        if (!vis[i]) {
            cout << char(i+'a');
        }
    }

    
    return 0;
}



