#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	int perm[8][3][3] = {{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
	                     {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
	                     {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
	                     {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
	                     {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
	                     {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
	                     {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
	                     {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}
	};
	int mincost = 64, cost = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				int diff = arr[j][k] - perm[i][j][k];
				cost += (diff < 0) ? diff * -1 : diff;
			}
		}
		if (cost < mincost) {
			mincost = cost;
		}
		cost = 0;
	}
	cout << mincost << flush;

	return 0;
}
