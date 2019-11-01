#include <bits/stdc++.h>
using namespace std;

int n, tmp, arr[100001];
long long sum;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
       scanf("%d", arr+i);
       sum += arr[i];
    }
    sort(arr, arr+n);
    if (arr[0] != 0) {
        puts("-1");
        return 0;
    }
    if (sum%3 == 0) {
        if (arr[n-1] == 0) {
            puts("0");
            return 0;
        }
        for (int i = n-1; ~i; --i) {
            printf("%d", arr[i]);
        }
    } else {
        int got = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i]%3 == sum%3) {
                sum -= arr[i];
                if (sum%3 == 0) {
                    got = 1;
                    arr[i] = -1;
                    break;
                }
            }
        }
        if (!got) {
            int cnt = 0;
            for (int i = 0; i < n; ++i) {
                if (arr[i]%3 == 3-(sum%3)) {
                    arr[i] = -1;
                    cnt++;
                }
                if (cnt == 2)
                    break;
            }
        }
        int found = 0;
        for (int i = n-1; ~i; --i) {
            if (arr[i] == 0 && found == 0) {
                printf("0\n");
                return 0;
            }
            if (arr[i] != -1) {
                printf("%d", arr[i]);
                found = 1;
            }

        }
    }
    puts("");
    return 0;
}

