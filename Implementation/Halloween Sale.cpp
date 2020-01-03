#include <iostream>

using namespace std;

int main()
{
    int p, d, m, s, games = 0;
    cin >> p >> d >> m >> s;
    while (s > 0)
    {
        if (s - p >= 0)
        {
            s -= p;
            games++;
        }
        else
        {
            s = 0;
        }
        if (p - d > m)
        {
            p -= d;
        }
        else
        {
            p = m;
        }
    }
    cout << games << flush;

    return 0;
}
