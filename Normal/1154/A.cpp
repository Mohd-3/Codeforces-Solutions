#include <bits/stdc++.h>
using namespace std;
 
long long arr[4];
int main() {
	// your code goes here
	for (int i = 0; i < 4; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr+4);
	cout << arr[3]-arr[2] << " " << arr[3]-arr[1] << " " << arr[3]-arr[0] << endl;
 
	return 0;
}