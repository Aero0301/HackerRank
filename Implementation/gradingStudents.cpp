#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] >= 38) {
            if (a[i] % 5 >= 3) {
                a[i] += 5 - a[i] % 5;
            }
        }
        cout << a[j] << endl;
    }
    return 0;
}
