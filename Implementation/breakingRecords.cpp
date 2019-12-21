#include <iostream>

using namespace std;

int main() {
	int r[2], g, max, min;
	cin >> g;
	int a[g];
	cin >> a[0];
	r[0] = 0;
	r[1] = 0;
	min = a[0];
	max = a[0];
	for (int i = 1; i < g; i++){
		cin >> a[g];
		if (a[g] > max) {
			max = a[g];
			++r[0];
		}
		if (a[g] < min) {
			min = a[g];
			++r[1];
		}
	}
	cout << r[0] << " " << r[1] << flush;

	return 0;
}
