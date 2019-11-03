#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
vector<int> v, ans;
void gen(int x = 0) {
    if (x>1000000)
        return;
    if (x!=0)
        v.add(x);
    v.add(x+1);
    if (x!= 0)
        gen(x*10);
    gen((x+1)*10);
}
int main() {
    IOS
    gen();
    cin >> n;
    for (int i = 64; ~i; --i) {
        while (n>=v[i]) {
            n-= v[i];
            ans.add(v[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " \n"[i==ans.size()-1];
    }


    
    return 0;
}



