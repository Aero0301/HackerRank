#include <iostream>
#include <vector>

using namespace std;

int n, k, r, c;

int main() {
    cin >> n >> k >> r >> c;
    --r;
    --c;
    vector<int> minDist(8);
    minDist[0] = n - r - 1;
    minDist[1] = r >= c ? n - r - 1 : n - c - 1;
    minDist[2] = n - c - 1;
    minDist[3] = r >= n - c - 1 ? n - c - 1 : r;
    minDist[4] = r;
    minDist[5] = r >= c ? c : r;
    minDist[6] = c;
    minDist[7] = r >= n - c - 1 ? n - r - 1 : c;
    int objR, objC;
    for (int i = 0; i < k; i++) {
        cin >> objR >> objC;
        --objR;
        --objC;
        if (objC == c) {
            if (objR > r && objR - r < minDist[0]) {
                minDist[0] = objR - r - 1;
            }
            else if (r > objR && r - objR < minDist[4]) {
                minDist[4] = r - objR - 1;
            }
        }
        else if (objR == r) {
            if (objC > c && objC - c < minDist[2]) {
                minDist[2] = objC - c - 1;
            }
            else if (c > objC && c - objC < minDist[6]) {
                minDist[6] = c - objC - 1;
            }
        }
        else if (objR - r == objC - c) {
            if (objR > r && objR - r < minDist[1]) {
                minDist[1] = objR - r - 1;
            }
            else if (r > objR && r - objR < minDist[5]) {
                minDist[5] = r - objR - 1;
            }
        }
        else if (objR - r == c - objC) {
            if (r > objR && r - objR < minDist[3]) {
                minDist[3] = r - objR - 1;
            }
            else if (objR > r && objR - r < minDist[7]) {
                minDist[7] = objR - r - 1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < 8; i++) {
        count += minDist[i];
    }
    cout << count << flush;

    return 0;
}
