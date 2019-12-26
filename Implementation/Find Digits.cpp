#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num, temp, count = 0;
		cin >> num;
		temp = num;
		while (temp != 0) {
			if (temp % 10 != 0) {
				if (num % (temp % 10) == 0) {
					++count;
				}
			}
			temp /= 10;
		}
		cout << count << endl;
	}

	return 0;
}
