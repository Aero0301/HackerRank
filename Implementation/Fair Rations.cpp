#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, loaves = 0;
    cin >> n;
    bool flag = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            count++;
            flag = !flag;
        }
        if (flag)
        {
            loaves += 2;
        }
    }
    if (count % 2 != 0)
    {
        cout << "NO" << flush;
    }
    else
    {
        cout << loaves << flush;
    }

    return 0;
}
