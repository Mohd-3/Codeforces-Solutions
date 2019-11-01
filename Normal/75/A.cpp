#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    int a = stoi(s1), b = stoi(s2);
    ll c = a+b;
    string s3 = to_string(c);
    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
    s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());
    int a2 = stoi(s1), b2 = stoi(s2);
    ll c2 = stoll(s3);
    if (a2+b2 == c2)
        puts("YES");
    else
        puts("NO");

    return 0;
}

