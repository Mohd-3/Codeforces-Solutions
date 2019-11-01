#include <bits/stdc++.h>
using namespace std;

char s[101];
int n, num;
int main() {
    scanf("%s", s);
    int n = strlen(s);
    for (int i = n-1; ~i; --i) {
        num = s[i]-'0';
        if (num%8 ==0) {
            printf("YES\n%d\n", num);
            return 0;
        }
        for (int j = i-1; ~j; --j) {
            num += 10*(s[j]-'0');
            if (num%8 ==0) {
                printf("YES\n%d\n", num);
                return 0;
            }
            for (int k = j-1; ~k; --k) {
                num += 100*(s[k]-'0');
                if (num%8 == 0) {
                    printf("YES\n%d\n", num);
                    return 0;
                }
                num -= 100*(s[k]-'0');
            }
            num -= 10*(s[j]-'0');
        }
        num -= s[i]-'0';

    }
    printf("NO\n");
    return 0;
}

