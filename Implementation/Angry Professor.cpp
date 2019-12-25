#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k, onTime = 0, temp;
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			if (temp <= 0) {
				++onTime;
			}
		}
		cout << (onTime < k ? "YES" : "NO") << endl;
	}

	return 0;
}
