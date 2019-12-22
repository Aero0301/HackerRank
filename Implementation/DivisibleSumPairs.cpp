#include <iostream>

using namespace std;

int main() {
	int n, k, count = 0;
	cin >> n >> k;
	int c[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int j = 0; j < n; j++) {
		for (int m = j + 1; m < n; m++) {
			if ((c[j] + c[m]) % k == 0) {
				count ++;
			}
		}
	}
	cout << count << flush;

	return 0;
}
