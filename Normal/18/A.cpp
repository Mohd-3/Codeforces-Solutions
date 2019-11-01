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

int dist(int a, int b, int c, int d) {
    return (a-b) * (a-b) + (c-d) * (c-d);
}

int arr[6], a, b, c;
bool check() {
    a = dist(arr[0], arr[2], arr[1], arr[3]);
    b = dist(arr[0], arr[4], arr[1], arr[5]);
    c = dist(arr[2], arr[4], arr[3], arr[5]);
    return (a&&b&&c != 0) && (a+b == c || a+c == b || b+c == a);
}

int main() {
    fl(6) {
        scanf("%d", arr+i);
    }
    if (check()) {
        printf("RIGHT\n");
        return 0;
    }
    for (int i = 0; i < 6; ++i) {
        arr[i]--;
        if (check()) {
            printf("ALMOST\n");
            return 0;
        }
        arr[i]+=2;
        if (check()) {
            printf("ALMOST\n");
            return 0;
        }
        arr[i]--;
        
    }
    printf("NEITHER\n");
    return 0;
}

