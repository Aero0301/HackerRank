#include <iostream>

using namespace std;

int main() {
	int s, t, a, b, m, n;
	cin >> s >> t >> a >> b >> m >> n;
	int d1[m], d2[n];
	int ap = 0, o = 0;
	for (int i = 0; i < m; ++i) {
		cin >> d1[i];
		if (d1[i] + a >= s && d1[i] + a <= t) {
			ap++;
		}
	}
	for (int j = 0; j < n; ++j) {
		cin >> d2[j];
		if (b + d2[j] >= s && b + d2[j] <= t) {
			o++;
		}
	}
	cout << ap << endl << o <<flush;

	return 0;
}
