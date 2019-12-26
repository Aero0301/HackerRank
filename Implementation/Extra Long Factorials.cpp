#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, carry = 0, product;
    cin >> n;
    vector<int> factorial;
    factorial.push_back(1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < factorial.size(); j++) {
            product = factorial[j] * i + carry;
            factorial[j] = product % 10;
            carry = product / 10;
        }
        while (carry) {
            factorial.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (vector<int>::iterator it = factorial.end() - 1; it >= factorial.begin(); --it) {
        cout << *it << flush;
    }

    return 0;
}
