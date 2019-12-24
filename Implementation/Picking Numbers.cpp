#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], count[101] = {};
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		++count[arr[i]];
	}
	int maxint = 0;
	for (int j = 0; j < 99; ++j) {
		if (count[j] != 0 && count[j + 1] != 0) {
			if (count[j] + count[j + 1] > maxint) {
				maxint = count[j] + count[j + 1];
			}
		}
	}
	cout << maxint << flush;

	return 0;
}
