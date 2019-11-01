#include <bits/stdc++.h>
using namespace std;

int n, tmp, arr[2001][2001];
long long d1[5000], d2[5000], sum;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &tmp);
            arr[i][j] = tmp;
            d1[i+j] += arr[i][j];
            d2[i-j+n] += arr[i][j];
        }
    }
    long long odd = -1, even = -1;
    pair<int, int> first, second;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum = d1[i+j]+d2[i-j+n]-arr[i][j];
            if ((i+j)&1) {
                if (sum > odd) {
                    odd = sum;
                    first = make_pair(i+1, j+1);
                }
            } else {
                if (sum > even) {
                    even = sum;
                    second = make_pair(i+1, j+1);
                }
            }
        }
    }
    printf("%lld\n", odd+even);
    printf("%d %d %d %d\n", first.first, first.second, second.first, second.second);
    return 0;
}

