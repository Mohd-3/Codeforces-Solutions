#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main() {
    cin >> a >> b >> c >> d;
    int misha = max(3*a/10, a-a/250*c);
    int vasya = max(3*b/10, b-b/250*d);
    cout << (misha > vasya ? "Misha" : (misha == vasya ? "Tie" : "Vasya")) << endl;
    return 0;
}

