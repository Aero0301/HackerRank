#include <iostream>

using namespace std;

int minimum(int n, int arr[]) {
    int index = 0, min = 1000;
    for (int j = 0; j < n; ++j) {
        if (arr[j] < min && arr[j] != 0) {
            index = j;
            min = arr[j];
        }
    }

    return index;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int index = minimum(n, arr), min;
    while (arr[index] != 0) {
        count = 0;
        min = arr[index];
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                ++count;
                arr[i] -= min;
            }
        }
        index = minimum(n, arr);
        cout << count << endl;
    }

    return 0;
}
