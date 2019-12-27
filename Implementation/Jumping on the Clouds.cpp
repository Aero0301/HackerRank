#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0, pos = 0;
    while (pos < n - 1) {
        if (arr[pos + 2] == 0) {
            pos += 2;
            ++count;
        }
        else {
            pos += 1;
            ++count;
        }
    }
    cout << count << flush;

    return 0;
}
