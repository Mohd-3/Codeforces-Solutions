#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int cnt;
string s;
stack<char> st;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='{' || s[i] == '[' || s[i] == '<' || s[i] == '(') {
                st.push(s[i]);
        } else if (s[i] == ')') {
            if (st.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }
            if (st.top() != '(') {
                cnt++;
            }
            st.pop();
        } else if (s[i] == '}') {
            if (st.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }
            if (st.top() != '{') {
                cnt++;
            }
            st.pop();
        } else if (s[i] == ']') {
            if (st.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }
            if (st.top() != '[') {
                cnt++;
            }
            st.pop();
        } else if (s[i] == '>') {
            if (st.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }
            if (st.top() != '<') {
                cnt++;
            }
            st.pop();
        }
    }
    if (!st.empty()) {
        cout << "Impossible" << endl;
    } else {
        cout << cnt << endl;
    }



    return 0;
}
