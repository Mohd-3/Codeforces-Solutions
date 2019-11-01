#include <bits/stdc++.h>
using namespace std;

int n, tmp;
set<int> se1, se2;
int main() {
	// your code goes here
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (se1.find(tmp) == se1.end()) {
			se1.insert(tmp);
		} else if (se2.find(tmp) == se2.end()) {
			se2.insert(tmp);
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	cout << se1.size() << endl;
	if (se1.size() == 0) {
		cout << endl;
	}
	for (auto x : se1) {
		cout << x << " ";
	}
	cout << endl;
	cout << se2.size() << endl;
	if (se2.size() == 0) {
		cout << endl;
	}
	for (auto x = se2.rbegin(); x != se2.rend(); x++) {
		cout << *x << " ";
	}
	cout << endl;
	
	return 0;
}