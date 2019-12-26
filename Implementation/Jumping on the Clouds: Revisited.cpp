#include <iostream>

using namespace std;

int main() {
    int n, k, e = 100, pos = 0;
    cin >> n >> k;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    do {
        pos += k % n;
        pos = pos >= n ? pos - n : pos;
        if (c[pos] == 1) {
            e -= 2;
        }
        e -= 1;
    } while (pos != 0);
    cout << e << flush;

    return 0;
}
