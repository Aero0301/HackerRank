#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int s1 = 0;
	int s2 = 0;
	for (int i = 0; i < n; i++) {
		s1 += a[i][i];
		s2 += a[i][n - i - 1];
	}
	int dif = s1 - s2;
	dif = dif < 0 ? dif * -1 : dif;
	cout << dif << flush;

	return 0;
}
