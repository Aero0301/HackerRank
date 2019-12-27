#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int freq[101] = {};
	int maxfreq = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		freq[arr[i]]++;
		if (freq[arr[i]] > maxfreq) {
			maxfreq = freq[arr[i]];
		}
	}
	cout << n - maxfreq << flush;

	return 0;
}
