#include <iostream>

using namespace std;

int main() {
	int q;
	cin >> q;
	int arr[q][3];
	for (int i = 0; i < q; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> arr[i][j];
		}
		int xa = (arr[i][0] - arr[i][2] > 0) ? arr[i][0] - arr[i][2] : arr[i][2] - arr[i][0];
		int xb = (arr[i][1] - arr[i][2] > 0) ? arr[i][1] - arr[i][2] : arr[i][2] - arr[i][1];
		if (xa < xb) {
			cout << "Cat A" << endl;
		}
		else if (xa > xb) {
			cout << "Cat B" << endl;
		}
		else {
			cout << "Mouse C" << endl;
		}
	}


	return 0;
}
