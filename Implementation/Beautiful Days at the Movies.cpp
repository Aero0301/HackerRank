#include <iostream>

using namespace std;

int reverseDifference(int num) {
	int rev = 0, temp = num, diff;
	while (temp != 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	diff = rev - num;
	return (diff > 0 ? diff : diff * -1);
}

int main() {
	int i, j, k, count;
	cin >> i >> j >> k;
	for (int m = i; m <= j; m++) {
		if (reverseDifference(m) % k == 0) {
			++count;
		}
	}
	cout << count << flush;

	return 0;
}
