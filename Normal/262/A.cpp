#include <bits/stdc++.h>
using namespace std;

int n, k;
int main() {
    cin >> n >> k;
    int count = 0;
    while (n--) {
        int cur = 0, num;
        cin >> num;
        while (num) {
            if (num%10 == 4 || num%10 == 7)
                cur++;
            num/=10;
        }
        if (cur <= k)
            count++;
    }
    cout << count << endl;

    return 0;
}

