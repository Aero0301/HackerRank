#include <iostream>

using namespace std;

int main() {
    long long int n;
    string s;
    getline(cin, s);
    cin >> n;
    long long int count = 0, extra = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            count++;
            if (i < n % s.length()) {
                ++extra;
            }
        }
    }
    count *= n / s.length();
    count += extra;
    cout << count << flush;

    return 0;
}
