#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;

char r[] = {'R', 'G', 'B'};
char r2[] = {'R', 'B', 'G'};
string s1, s2, s3, s4, s5, s6, inn;
int n;
int main() {
    IOS
    cin >> n >> inn;
    int a=0, b=1, c=2;
    for (int i = 0; i < n; ++i) {
        s1.add(r[a]);
        s2.add(r[b]);
        s3.add(r[c]);
        s4.add(r2[a++]);
        s5.add(r2[b++]);
        s6.add(r2[c++]);
        if (a>2)
            a=0;
        if (b>2)
            b = 0;
        if (c > 2)
            c=0;
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4=0, cnt5=0, cnt6=0;
    for (int i = 0; i < n; ++i) {
        cnt1 += inn[i]!=s1[i];
        cnt2 += inn[i]!=s2[i];
        cnt3 += inn[i]!=s3[i];
        cnt4 += inn[i]!=s4[i];
        cnt5 += inn[i]!=s5[i];
        cnt6 += inn[i]!=s6[i];
    }
    int mn = min(cnt1, min(cnt2, min(cnt3, min(cnt4, min(cnt5, cnt6)))));
    if (mn==cnt1) {
        cout << cnt1 << endl;
        cout << s1 << endl;
    } else if (mn==cnt2) {
        cout << cnt2 << endl;
        cout << s2 << endl;
    } else if (mn==cnt3){
        cout << cnt3 << endl;
        cout << s3 << endl;
    } else if (mn==cnt4) {
        cout << cnt4 << endl;
        cout << s4 << endl;
    } else if (mn==cnt5) {
        cout << cnt5 << endl;
        cout << s5 << endl;
    } else if (mn==cnt6) {
        cout << cnt6 << endl;
        cout << s6 << endl;
    }

    return 0;
}


