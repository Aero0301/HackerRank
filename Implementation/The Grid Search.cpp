#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int R, C, r, c;
        bool fl = 0;
        cin >> R >> C;
        string G[R];
        for (int j = 0; j < R; j++)
        {
            cin >> G[j];
        }
        cin >> r >> c;
        string P[r];
        for (int j = 0; j < r; j++)
        {
            cin >> P[j];
        }
        for (int j = 0; j <= R - r; j++)
        {
            for (int k = 0; k <= C - c; k++)
            {
                if (G[j][k] == P[0][0] && G[j + r - 1][k + c - 1] == P[r - 1][c - 1])
                {
                    fl = 1;
                    for (int l = 0; l < r; l++)
                    {
                        for (int m = 0; m < c; m++)
                        {
                            if (G[l + j][m + k] != P[l][m])
                            {
                                fl = 0;
                                break;
                            }
                        }
                        if (!fl)
                        {
                            break;
                        }
                    }
                }
                if (fl)
                {
                    break;
                }
            }
            if (fl)
            {
                break;
            }
        }
        if (fl)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
