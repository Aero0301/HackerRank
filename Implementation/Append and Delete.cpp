#include <iostream>

using namespace std;

bool substring(string a, string b) {
    bool fl = 1;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            fl = 0;
            break;
        }
    }
    return fl;
}

int main() {
    string s, t;
    int k, count = 0;
    cin >> s >> t >> k;
    if (s.length() + t.length() <= k) {
        cout << "Yes" << flush;
    }
    else {
        while (!(substring(s, t))) {
            s.pop_back();
            ++count;
        }
        count += t.length() - s.length();
        if ((k - count) % 2 == 0 && k >= count) {
            cout << "Yes" << flush;
        }
        else {
            cout << "No" << flush;
        }
    }

    return 0;
}
