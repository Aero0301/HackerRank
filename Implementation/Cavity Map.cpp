#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string input[n];
    char depths[n][n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
        for (int j = 0; j < n; j++)
        {
            depths[i][j] = input[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (input[i][j] > input[i + 1][j] && input[i][j] > input[i][j + 1] && input[i][j] > input[i - 1][j] && input[i][j] > input[i][j - 1])
            {
                depths[i][j] = 'X';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << depths[i][j] << flush;
        }
        cout << endl;
    }

    return 0;
}
