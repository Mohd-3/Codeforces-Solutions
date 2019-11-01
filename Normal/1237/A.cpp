#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, arr[14000];
ll sm;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sm += arr[i]/2;
    }
    for (int i = 0; i < n; ++i) {
        if (sm==0) {
            break;
        }
        if (abs(arr[i])&1) {
            if (sm > 0 && arr[i] < 0) {
                sm--;
                arr[i]--;
            } else if (sm < 0 && arr[i] > 0){
                sm++;
                arr[i]++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i]/2);
    }
    
    return 0;
}



