#include <iostream>

using namespace std;

int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (x1 > x2) {
        x2 = x1 + x2;
        x1 = x2 - x1;
        x2 -= x1;
        v2 = v1 + v2;
        v1 = v2 - v1;
        v2 -= v1;
    }
    if (x1 == x2 && v1 == v2){
        cout << "YES" << flush;
    }
    else if (v1 != v2) {
        if ((x2 - x1) / (v1 - v2) < 0 || (x2 - x1) % (v1 - v2) != 0 || x1 == x2) {
            cout << "NO" << flush;
        } else {
            cout << "YES" << flush;
        }
    }
    else {
        cout << "NO" << flush;
    }
    return 0;
}
