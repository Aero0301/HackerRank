#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, temp;
	cin >> n;
	int scores[n];
	for (int i = 0; i < n; ++i) {
		cin >> temp;
		if (temp == scores[i - 1]) {
			--i;
			--n;
			continue;
		}
		scores[i] = temp;
	}
	cin >> m;
	int alice[m], limit = n - 1;
	for (int j = 0; j < m; ++j) {
		cin >> alice[j];
		int k;
		for (k = limit; scores[k] <= alice[j] && k != -1; --k) {
		}
		limit = k;
		cout << k + 2 << endl;
	}

	return 0;
}
