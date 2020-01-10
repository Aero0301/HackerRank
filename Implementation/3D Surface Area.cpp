#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int H, W, i, j, area = 0;
    cin >> H >> W;
    vector<vector<int>> toy(H + 2, vector<int>(W + 2, 0));
    for (i = 1; i <= H; i++)
    {
        for (j = 1; j <= W; j++)
        {
            cin >> toy[i][j];
        }
    }
    area = 2 * H * W;
    for (i = 1; i <= H; i++)
    {
        for (j = 1; j <= W; j++)
        {
            if (i == 1)
            {
                area += toy[i][j];
            }
            if (j == 1)
            {
                area += toy[i][j];
            }
            area += abs(toy[i][j] - toy[i + 1][j]) + abs(toy[i][j] - toy[i][j + 1]);
        }
    }
    cout << area << flush;

    return 0;
}
