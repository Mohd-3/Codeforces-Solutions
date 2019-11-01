#include <bits/stdc++.h>
using namespace std;
int n, v, count, k, tmp;
vector<int> vi;
int main() {
    scanf("%d %d", &n, &v);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &k);
        int good = 0;
        for (int j = 0; j < k; ++j) {
            scanf("%d", &tmp);
            if (v > tmp)
                good = 1;
        }
        if (good)
            vi.push_back(i);
    }
    printf("%d\n", (int)vi.size());
    for (int i = 0; i < vi.size(); ++i) {
        printf("%d%c", vi[i], " \n"[i==(int)vi.size()-1]);
    }

    return 0;
}
