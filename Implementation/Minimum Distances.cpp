#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, temp, dist;
    cin >> n;
    int minDist = n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        vector<int>::iterator el = find(it + 1, vec.end(), *it);
        if (el != vec.end() && el - it < minDist)
        {
            minDist = el - it;
        }
    }
    cout << (minDist != n ? minDist : -1) << flush;

    return 0;
}
