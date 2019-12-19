#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int p = 0, ne = 0, z = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0) {
			p += 1;
		} else if (a[i] < 0) {
			ne += 1;
		} else {
			z += 1;
		}
	}
	float p1, n1, z1;
	p1 = (float)p / (p + ne + z);
	n1 = (float)ne / (p + ne + z);
	z1 = (float)z / (p + ne + z);
	cout << setprecision(6) << p1 << endl;
	cout << setprecision(6) << n1 << endl;
	cout << setprecision(6) << z1 << endl;
	return 0;
}
