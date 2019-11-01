#include <bits/stdc++.h>
using namespace std;

int n, k, fr[101];
int main() {
    cin >> n >> k;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        fr[tmp]++;
        mx = max(mx, fr[tmp]);
    }
    int dishes = (mx%k == 0 ? mx/k : (mx+k)/k)*k;

    int count = 0;
    for (int i = 0; i < 101; ++i) {
        if (fr[i] > 0) {
            count += dishes - fr[i];
        }
    }
    cout << count << endl;
    return 0;
}

