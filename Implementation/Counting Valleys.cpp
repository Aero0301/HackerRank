#include <iostream>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int position = 0, count = 0;
	for (int i= 0; i<n; i++) {
		if (position == 0 && s[i] == 'D') {
			++count;
		}
		if (s[i] == 'U') {
			++position;
		}
		else if (s[i] == 'D') {
			--position;
		}
	}
	cout << count << flush;

	return 0;
}
