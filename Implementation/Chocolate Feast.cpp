#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c, m, choc = 0, wrap;
        cin >> n >> c >> m;
        choc += n / c;
        wrap = choc;
        while (wrap >= m)
        {
            choc += wrap / m;
            wrap = wrap / m + wrap % m;
        }
        cout << choc << endl;
    }

    return 0;
}
