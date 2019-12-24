#include <iostream>
#include <vector>

using namespace std;

int main() {
	int heights[26], maxHeight = 0;
	for (int i = 0; i< 26; i++) {
		cin >> heights[i];
	}
	string s;
	cin >> s;
	int l = s.length();
	for (int j = 0; j < l; j++) {
		if (heights[(int)(s[j] - 97)] > maxHeight) {
			maxHeight = heights[(int)(s[j] - 97)];
		}
	}
	cout << maxHeight * l << flush;

	return 0;
}
