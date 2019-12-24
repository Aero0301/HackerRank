#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, height = 1;
		cin >> n;
		for (int j = 1; j <= n; j++) {
			if (j % 2 == 0) {
				++height;
			}
			else {
				height *= 2;
			}
		}
		cout << height << endl;
	}

	return 0;
}
