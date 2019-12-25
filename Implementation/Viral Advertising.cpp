#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, liked = 0;
	cin >> n;
	for (int shared = 5, i = 0; i < n; ++i, shared = floor(shared / 2) * 3) {
		liked += floor(shared / 2);
	}
	cout << liked << flush;

	return 0;
}
