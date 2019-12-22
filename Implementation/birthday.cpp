#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int c[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	int d, m;
	cin >> d >> m;
	int sum = 0;
	for (int j = 0; j < m; j++) {
		sum += c[j];
	}
	int count = 0;
	if (sum == d) {
		++count;
	}
	for (int k = m; k < n; k++) {
		sum += c[k] - c[k-m];
		if (sum == d) {
			++count;
		}
	}
	cout << count << flush;

	return 0;
}
