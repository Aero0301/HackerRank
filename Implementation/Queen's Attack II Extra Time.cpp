#include <iostream>
#include <vector>

using namespace std;

int n, k, queenPos[2], count, pos[2];

void setPos() {
	pos[0] = queenPos[0];
	pos[1] = queenPos[1];
}

int main() {
	cin >> n >> k >> queenPos[0] >> queenPos[1];
	queenPos[0]--;
	queenPos[1]--;
	vector<vector<bool>> board(n, vector<bool>(n, 0));
	vector<vector<int>> objPos(k, vector<int>(2));
	for (int i = 0; i < k; i++) {
		cin >> objPos[i][0] >> objPos[i][1];
		board[objPos[i][0] - 1][objPos[i][1] - 1] = 1;
	}
	count = 0;
	setPos();
	while (pos[0] != n - 1) {
		pos[0]++;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[1] != n - 1) {
		pos[1]++;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[0] != 0) {
		pos[0]--;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[1] != 0) {
		pos[1]--;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[0] != n - 1 && pos[1] != n - 1) {
		pos[0]++;
		pos[1]++;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[0] != 0 && pos[1] != n - 1) {
		pos[0]--;
		pos[1]++;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[0] != n - 1 && pos[1] != 0) {
		pos[0]++;
		pos[1]--;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	setPos();
	while (pos[0] != 0 && pos[1] != 0) {
		pos[0]--;
		pos[1]--;
		if (board[pos[0]][pos[1]] != 1) {
			++count;
		}
		else {
			break;
		}
	}
	cout << count << flush;

	return 0;
}
