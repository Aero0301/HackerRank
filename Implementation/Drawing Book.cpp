#include <iostream>

using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	if (p % 2 != 0) {
		p -= 1;
	}
	if (n % 2 != 0) {
		n -= 1;
	}
	int frontdist = p / 2, backdist = (n - p) / 2;
	cout << ((frontdist < backdist) ? frontdist : backdist) << flush;

	return 0;
}
