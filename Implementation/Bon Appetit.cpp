#include <iostream>

using namespace std;

int main() {
    int n, k, b, s = 0;
    cin >> n >> k;
    int cost[n];
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
        s += cost[i];
    }
    cin >> b;
    int bac = (s - cost[k])/2;
    if (b == bac) {
        cout << "Bon Appetit" << flush;
    }
    else {
        cout << b - bac << flush;
    }

    return 0;
}
