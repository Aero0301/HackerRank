#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m, s, num;
		cin >> n >> m >> s;
		num = s != 1 ? s - 1 : n;
		num += m % n;
		if (num > n) {
			num -= n;
		}
		cout << num << endl;
	}

	return 0;
}
