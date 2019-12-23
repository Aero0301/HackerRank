#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], b[101] = {}, count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (b[arr[i]] == 1) {
			++count;
			b[arr[i]] = 0;
		}
		else {
			++b[arr[i]];
		}
	}
	cout << count << flush;

	return 0;
}
