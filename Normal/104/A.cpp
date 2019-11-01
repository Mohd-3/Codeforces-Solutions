#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 20)
        printf("15\n");
    else if (n > 21 || n <= 10)
        printf("0\n");
    else 
        printf("4\n");
    return 0;
}
