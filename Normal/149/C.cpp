#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
using ll = long long;
using namespace std;

int n;
pair<int, int> arr[100001];
vector<int> a, b;
ll sumA, sumB;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr, arr+n);
    int st = 0, en = n-1;
    int t = 0;
    while (st <= en) {
        if (!t) {
            if (sumA<sumB) {
                sumA += arr[en].first;
                a.emplace_back(arr[en].second);
                en--;
            } else {
                sumA += arr[st].first;
                a.emplace_back(arr[st].second);
                st++;
            }
        } else {
            if (sumB<sumA) {
                sumB += arr[en].first;
                b.emplace_back(arr[en].second);
                en--;
            } else {
                sumB += arr[st].first;
                b.emplace_back(arr[st].second);
                st++;
            }
        }
        t = !t;
    }
    cout << a.size() << endl;
    for (int i = 0; i < (int) a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << b.size() << endl;
    for (int i = 0; i < (int) b.size(); ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

