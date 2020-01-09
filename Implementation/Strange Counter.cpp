#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int t, value = 0, i, temp = 0;
    cin >> t;
    for (i = 0; value - 2 <= t; i++) 
    {
        value = 3 * pow(2, i);
    }
    value = value - t - 2;
    cout << value << flush;

    return 0;
}
