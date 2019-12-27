#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b, root;
        cin >> a >> b;
        int squares = 0;
        root = ceil(sqrt(a));
        while (root <= floor(sqrt(b))) {
            ++squares;
            ++root;
        }
        cout << squares << endl;
    }

    return 0;
}
