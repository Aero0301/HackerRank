#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b, last;
        cin >> n >> a >> b;
        if (a > b)
        {
            b = a + b;
            a = b - a;
            b -= a;
        }
        last = (n - 1) * a;
        cout << last << " " << flush;
        if (a != b)
        {
            for (int j = 1; j < n; j++)
            {
                last = last - a + b;
                cout << last << " " << flush;
            }
        }
        cout << endl;
    }

    return 0;
}
