#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, max = 0;
	cin >> n >> k;
	int hurdles[n];
	for (int i = 0; i < n; ++i) {
		cin >> hurdles[i];
		if (hurdles[i] > max) {
			max = hurdles[i];
		}
	}
	cout << ((max < k) ? 0 : (max - k)) << flush;

	return 0;
}
