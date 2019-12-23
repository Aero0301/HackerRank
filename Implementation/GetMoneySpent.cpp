#include <iostream>

using namespace std;

int main() {
    int b, n, m;
    cin >> b >> n >> m;
    int temp;
    int maxExpenditure = 0, keyboards[1000], drives[1000];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > b) {
            --n;
            --i;
            continue;
        }
        keyboards[i] = temp;
    }
    for (int j = 0; j < m; j++) {
        cin >> temp;
        if (temp > b) {
            --m;
            --j;
            continue;
        }
        drives[j] = temp;
        for (int k = 0; k < n; k++) {
            if (drives[j] + keyboards[k] > maxExpenditure && drives[j] + keyboards[k] <= b) {
                maxExpenditure = drives[j] + keyboards[k];
            }
        }
        if (maxExpenditure == b) {
            break;
        }
    }
    cout << (maxExpenditure == 0 ? -1 : maxExpenditure) << flush;

    return 0;
}
