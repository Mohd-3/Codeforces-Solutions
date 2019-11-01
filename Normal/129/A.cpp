#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    vector<int> v;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        v.push_back(t);
        sum += t;
    }
    int count = 0;
    if (sum&1) {
        for (auto x : v) {
            if (x&1)
                count++;
        }
    }
    else {
        for (auto x : v) {
            if (!(x&1))
                count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
