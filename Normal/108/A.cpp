#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
    cin >> s;
    int first = stoi(s.substr(0, 2)), second = stoi(s.substr(3));
    while (1) {
        second++;
        if (second >= 60) {
            first++;
            second = 0;
        }
        if (first == 24) {
            first = 0;
        }
        if (first == 0 && second == 0) {
            puts("00:00");
            return 0;
        }
        if (first/10 == second%10 && first%10 == second/10) {
            cout << first/10 << first%10 << ":" << second/10 << second%10 << endl;
            return 0;
        }
    }

    return 0;
}

