#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int n, arr[140001];
char s[1000001];
vector<int> st;
int main() {
    IOS
    scanf("%d%s", &n, s);
    int m = strlen(s);
    for (int i = 0; i < m; ++i) {
        if (s[i]==')') {
            int tmp = st.back();
            st.pop_back();
             arr[tmp] = st.back();
        } else if (s[i]>='1' && s[i]<='9'){
            int num = 0;
            while (s[i] >='0' && s[i] <='9') {
                num *= 10;
                num += s[i]-'0';
                i++;
            }
            i--;
            st.emplace_back(num);
        }
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n]);
    }
     return 0;
}