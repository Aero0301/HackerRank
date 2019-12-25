#include <iostream>

using namespace std;

int n;
int arr[51];

int searchIndex(int num) {
    for (int i = 1; i <= n; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return 0;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    for (int x = 1; x <= n; x++) {
        cout << searchIndex(searchIndex(x)) << endl;
    }
    return 0;
}
