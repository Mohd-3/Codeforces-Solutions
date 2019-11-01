#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n;
pair<int, int> arr[51];
char s[51];
int main() {
    scanf("%d", &t);
    while (t--) {
        int Z = 0, O = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%s", s);
            int sz = strlen(s), one=0, zero=0;
            for (int i = 0; i < sz; ++i) {
                if (s[i] == '0') {
                    zero++;
                    Z++;
                } else {
                    one++;
                    O++;
                }
            }
            arr[i].first = zero;
            arr[i].second = one;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    continue;
                }
                if (arr[i].first == arr[j].second) {
                    arr[i].second += arr[i].first;
                    arr[j].first += arr[j].second;
                    arr[i].first = arr[j].second = 0;
                    break;
                }
                if (arr[i].second == arr[j].first) {
                    arr[i].first += arr[i].second;
                    arr[j].second += arr[j].first;
                    arr[i].second = arr[j].first = 0;
                    break;
                }
            }
            for (int i = 0; i < n; ++i) {
                if ((arr[i].first&1) && (arr[i].second&1)) {
                    for (int j = 0; j < n; ++j) {
                        if (i == j) {
                            continue;
                        }
                        if ((arr[j].first&1) && (arr[j].second&1)) {
                            arr[j].first++;
                            arr[i].second++;
                            arr[i].first--;
                            arr[j].second--;
                            break;
                        }
                        if ((arr[j].first+arr[j].second)&1) {
                            if (arr[j].first > arr[j].second) {
                                arr[j].first--;
                                arr[j].second++;
                                arr[i].first++;
                                arr[i].second--;
                                break;
                            }
                            if (arr[j].second > arr[j].first) {
                                arr[j].second--;
                                arr[j].first++;
                                arr[i].second++;
                                arr[i].first--;
                                break;
                            }
                        }
                    }
                }
            }
        }/*
        for (int i = 0; i < n; ++i) {
            if ((arr[i].first&1) && (arr[i].second&1)) {
                for (int j = 0; j < n; ++j) {
                    if (i == j) {
                        continue;
                    }
                    if (arr[i].first == arr[j].second) {
                        arr[i].second += arr[i].first;
                        arr[j].first += arr[j].second;
                        arr[i].first = arr[j].second = 0;
                        break;
                    } else if (arr[i].second == arr[j].first) {
                        arr[i].first += arr[i].second;
                        arr[j].second += arr[j].first;
                        arr[i].second = arr[j].first = 0;
                        break;
                    }
                }
            }
        }*/
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if  (((arr[i].first&1) && !(arr[i].second&1)) || ((arr[i].second&1) && !(arr[i].first&1)) || (!(arr[i].first&1) && !(arr[i].second&1))) {
                cnt++;

            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}



