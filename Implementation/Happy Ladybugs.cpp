#include <iostream>

using namespace std;

int main()
{
    int g;
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        int n, count = 0, alp[26] = {};
        cin >> n;
        string b;
        cin >> b;
        for (int j = 0; j < n; j++)
        {
            if (b[j] == '_')
            {
                count++;
            }
            else
            {
                alp[(int)(b[j] - 65)]++;
            }
        }
        bool fl = 0;
        if (count == n)
        {
            fl = 1;
        }
        else if (n == 1){}
        else if (count > 0)
        {
            fl = 1;
            for (int j = 0; j < 26; j++)
            {
                if (alp[j] == 1)
                {
                    fl = 0;
                    break;
                }
            }
        }
        else if (count == 0)
        {
            fl = 1;
            if (b[0] != b[1] || b[n - 2] != b[n - 1])
            {
                fl = 0;
            }
            for (int j = 1; j < n - 1; j++)
            {
                if (fl == 0)
                {
                    break;
                }
                if (b[j] != b[j - 1] && b[j] != b[j + 1])
                {
                    fl = 0;
                }
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
