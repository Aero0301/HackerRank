#include <iostream>
#include <vector>

using namespace std;

int main() {
	int q, n, temp, k;
	cin >> q >> n;
	vector<vector<int>> arr(n);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; ++j) {
			cin >> temp;
			arr[i].push_back(temp);
		}
	}
	int i, j, m;
	for (m = 0; m < q; ++m) {
		cin >> i >> j;
		cout << arr[i][j] << endl;
	}

	return 0;
}
