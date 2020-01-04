#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int widths[n];
    for (int i = 0; i < n; i++)
    {
        cin >> widths[i];
    }
    for (int i = 0; i < t; i++)
    {
        int i1, i2;
        cin >> i1 >> i2;
        cout << *min_element(widths + i1, widths + i2 + 1) << endl;
    }

    return 0;
}
