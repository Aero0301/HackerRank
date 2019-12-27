#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<long int> arr;

int main() {
    int t;
    cin >> n >> k;
    if (k == 0 || k == 1) {
        cout << 1 << flush;
    }
    else {
        int maxcount = 0;
        vector<int> remainder(k, 0);
        for (int i = 0; i < n; i++) {
            cin >> t;
            arr.push_back(t);
            ++remainder[t % k];
        }
        if (remainder[0] > 0) {
            ++maxcount;
        }
        int limit;
        if (k % 2 == 0) {
            limit = k / 2 - 1;
            if (remainder[limit + 1 > 0]) {
                ++maxcount;
            }
        }
        else {
            limit = (k - 1) / 2;
        }
        for (int j = 1; j <= limit; j++) {
            maxcount += remainder[j] > remainder[k - j] ? remainder[j] : remainder[k - j];
        }
        cout << maxcount << flush;
    }

    return 0;
}
