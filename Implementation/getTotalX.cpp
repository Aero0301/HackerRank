#include <iostream>

using namespace std;

int lcm(int a, int b) {
    int hcf = a, lcm, temp = b;
    while (hcf != temp) {
        if (hcf > temp) {
            hcf -= temp;
        }
        else {
            temp -= hcf;
        }
    }
    lcm = a * b / hcf;

    return lcm;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    cin >> a[0];
    int mina = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < mina) {
            mina = a[i];
        }
    }
    cin >> b[0];
    int minb = b[0];
    int maxb = b[0];
    for (int j = 1; j < m; j++) {
        cin >> b[j];
        if (b[j] < minb) {
            minb = b[j];
        }
        if (b[j] > maxb) {
            maxb = b[j];
        }
    }
    if (mina > maxb) {
        cout << 0 << flush;
    }
    else {
        int l;
        if (n == 1) {
            l = a[0];
        }
        else {
            l = lcm(a[0], a[1]);
            for (int k = 2; k < n; k++) {
                l = lcm(l, a[k]);
            }
        }
        int count = 0, tl = l;
        bool flag = 1;
        while (tl <= minb) {
            for (int i = 0; i < m; i++) {
                if (b[i] % tl != 0) {
                    flag = 0;
                    continue;
                }
            }
            if (flag == 1) {
                count++;
            }
            tl += l;
            flag = 1;
        }
        cout << count << flush;
    }

    return 0;
}
