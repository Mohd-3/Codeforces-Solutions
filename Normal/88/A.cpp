#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define fl(e) for(int i = 0; i < (e); ++i)
#define flc(s, e, inc) for(int i = (s); i < (e); i+=(inc))
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a , int b) {
    return a < b ? a : b;
}
int abs(int a) {
    return a < 0 ? -a : a;
}
string x, y, z;
unordered_map<string, int> m;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    m["C"] = 1;
    m["C#"] = 2;
    m["D"] = 3;
    m["D#"] = 4;
    m["E"] = 5;
    m["F"] = 6;
    m["F#"] = 7;
    m["G"] = 8;
    m["G#"] = 9;
    m["A"] = 10;
    m["B"] = 11;
    m["H"] = 12;
    cin >> x >> y >> z;
    int a = m[x], b = m[y], c = m[z];
    if (a == b || a == c || b == c) {
        cout << "strange\n";
        return 0;
    }
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr+3);
    do {
        int diff = arr[1] > arr[0] ? abs(arr[1]-arr[0]) : 12-arr[0] + arr[1];
        int diff2 = arr[2] > arr[1] ? abs(arr[2]-arr[1]) : 12-arr[1] + arr[2];
        if (diff == 3 && diff2 == 4) {
            cout << "minor\n";
            return 0;
        } else if (diff == 4 && diff2 == 3) {
            cout << "major\n";
            return 0;
        }
    } while (next_permutation(arr, arr+3));
    cout << "strange\n";

    return 0;
}

