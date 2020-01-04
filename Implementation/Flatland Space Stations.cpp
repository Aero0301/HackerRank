#include <iostream>
#include <algorithm>

using namespace std;

int n, m, maxDist;

int index(bool arr[], int in)
{
    for (int i = in; i < n; i++)
    {
        if (arr[i])
        {
            return i;
        }
    }
    return n;
}

int main()
{
    maxDist = 0;
    cin >> n >> m;
    int cities[m];
    bool indices[n];
    fill(indices, indices + n, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> cities[i];
        indices[cities[i]] = 1;
    }
    int nextIndex = index(indices, 0), prevIndex = nextIndex;
    maxDist = nextIndex;
    while (true)
    {
        nextIndex = index(indices, nextIndex + 1);
        if (nextIndex == n)
        {
            break;
        }
        int dist = (nextIndex - prevIndex) / 2;
        if (dist > maxDist)
        {
            maxDist = dist;
        }
        prevIndex = nextIndex;
    }
    if (n - 1 - prevIndex > maxDist)
    {
        maxDist = n - 1 - prevIndex;
    }

    cout << maxDist << flush;

    return 0;
}
