#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, d, temp, count = 0;
    cin >> n >> d;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (find(vec.begin(), vec.end(), *it + d) != vec.end() && find(vec.begin(), vec.end(), *it + (d * 2)) != vec.end())
        {
            count++;
        }
    }
    cout << count << flush;

    return 0;
}
