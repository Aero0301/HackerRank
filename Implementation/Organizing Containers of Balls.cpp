#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int n;
		cin >> n;
		vector<vector<int>> M(n, vector<int>(n));
		vector<int> type(n, 0);
		vector<int> balls(n, 0);
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> M[j][k];
				type[k] += M[j][k];
				balls[j] += M[j][k];
			}
		}
		sort(type.begin(), type.end());
		sort(balls.begin(), balls.end());
		bool f = true;
		for (int j = 0; j < n; j++) {
			if (balls[j] != type[j]) {
				f = false;
				break;
			}
		}
		if (f) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}
	}
	
	return 0;
}
