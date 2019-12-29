#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long int b, w, bc, wc, z, cost = 0;
        cin >> b >> w >> bc >> wc >> z;
        if (bc > wc + z) {
            cost = (b + w) * wc + b * z;
        }
        else if (wc > bc + z) {
            cost = (b + w) * bc + w * z;
        }
        else {
            cost = b * bc + w * wc;
        }
        cout << cost << endl;
    }

    return 0;
}
