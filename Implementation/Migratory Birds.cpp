#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, max;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	max = arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	vector<int> count(max);
	for (vector<int>::iterator it = count.begin(); it != count.end(); it++) {
		*it = 0;
	}
	for (int j = 0; j < n; j++) {
		++count[arr[j]-1];
	}
	int maxtype = 0;
	int max2 = count[0];
	for (int k = 1; k < count.size(); k++) {
		if (count[k] > max2) {
			max2 = count[k];
			maxtype = k;
		}
	}
	cout << maxtype + 1 << flush;

	return 0;
}
