#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int n;
vector<string> v;
string tmp;
ll arr[2001];
ll addd[2001];
int main() {
    IOS;
    cin >> n;
    range(i, n) {
        cin >> arr[i];
    }
    if (arr[n-1] < n) {
        tmp = "1 " + to_string(n-arr[n-1]) + " " + to_string(n);
        int temp = n-arr[n-1];
        range(i, n) {
            arr[i] += temp;
        }
        v.add(tmp);
    }
    int md = n+1;
    range(i, n-1) {
        while (arr[i]%md != i+1) {
            arr[i]++;
            addd[i]++;
        }
    }
    range(i, n-2) {
       addd[i] -= min(addd[i], addd[i+1]); 
    }
    for (int i = n-1; ~i; --i) {
        if (addd[i] > 0) {
            tmp = "1 " + to_string(i+1) + " " + to_string(addd[i]);
            v.add(tmp);
        }
    }
    if (v.empty()) {
        cout << "0\n";
        return 0;
    }
    cout << v.size() << endl;
    for (auto ss : v) {
        cout << ss << endl;
    }
    cout << "2 " << (n-1) << " " << md << endl;


    return 0;
}

