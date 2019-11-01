#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int n, x;
string s;
priority_queue<int, vector<int>, greater<int>> q;
vector<string> v;
int main() {
    IOS;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "insert") {
            cin >> x;
            q.push(x);
            v.add(s + " " + to_string(x));
            //cout << s << " " << x << endl;
        } else if (s == "removeMin") {
            if (!q.empty()) {
                q.pop();
                v.add(s);
                //cout << s << endl;
            } else {
                v.add("insert 1");
                v.add(s);
                //cout << "insert 1\n" << s << endl;
            }
        } else if (s == "getMin") {
            cin >> x;
            if (q.empty()) {
               q.push(x);
               v.add("insert " + to_string(x));
               v.add(s + " " + to_string(x));
               //cout << "insert " << x << endl;
               //cout << s << " " << x << endl;
            } else {
                int tmp = q.top();
                if (tmp == x) {
                    v.add(s + " " + to_string(x));
                    //cout << s << " " << x << endl;
                } else if (tmp > x) {
                    q.push(x);
                    v.add("insert " + to_string(x));
                    v.add(s + " " + to_string(x));
                    //cout << "insert " << x << endl;
                    //cout << s << x << endl;
                } else {
                    while (!q.empty()) {
                        tmp = q.top();
                        if (tmp >= x)
                            break;
                        q.pop();
                        v.add("removeMin");
                        //cout << "removeMin\n";
                    }
                    if (tmp == x) {
                        v.add(s + " " + to_string(x));
                        //cout << s << x << endl;
                    } else {
                        q.push(x);
                        v.add("insert " + to_string(x));
                        v.add(s + " " + to_string(x));
                        //cout << "insert " << x << endl;
                        //cout << s << " " << x << endl;
                    }
                }

            }
        }
    }
    cout << v.size() << endl;
    for (auto ss : v) {
        cout << ss << endl;
    }

    return 0;
}

