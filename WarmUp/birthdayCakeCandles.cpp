#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	int b = 0;
	for (int j = 0; j < n; j++) {
		if (a[j] == max) {
			b += 1;
		}
	}
	cout << b << flush;
	return 0;
}
