#include <iostream>
#include <vector>

using namespace std;

int n, m, maxCount;

int main() {
	cin >> n >> m;
	vector<string> topics(n);
	for (int i = 0; i < n; i++) {
		cin >> topics[i];
	}
	maxCount = 0;
	int count = 0, teams = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (topics[i][k] == '1' || topics[j][k] == '1') {
					count++;
				}
			}
			if (count > maxCount) {
				maxCount = count;
				teams = 1;
			}
			else if (count == maxCount) {
				teams++;
			}
			count = 0;
		}
	}
	cout << maxCount << endl << teams << flush;

	return 0;
}
