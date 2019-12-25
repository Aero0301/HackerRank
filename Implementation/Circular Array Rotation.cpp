#include <iostream>

using namespace std;

int main() {
	int n, k, q, temp;
	cin >> n >> k >> q;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[(i + k) % n];
	}
	for (int j = 0; j < q; ++j) {
		cin >> temp;
		cout << arr[temp] << endl;
	}

	return 0;
}
