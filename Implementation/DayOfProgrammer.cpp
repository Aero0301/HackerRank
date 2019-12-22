#include <iostream>

using namespace std;

int y;

bool leap() {
	if (y < 1918) {
		return y % 4 == 0;
	}
	else {
		return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
	}
}

int main() {
	cin >> y;
	if (y == 1918) {
		cout << "26.09.1918" << flush;
	}
	else {
		if (leap()) {
			cout << "12.09." << y << flush;
		}
		else {
			cout << "13.09." << y << flush;
		}
	}

	return 0;
}
