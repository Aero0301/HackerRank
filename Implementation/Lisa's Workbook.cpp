#include <iostream>

using namespace std;

int main()
{
    int n, k, page = 1, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int t, prob = 0;
        cin >> t;
        while (prob < t)
        {
            if (page > prob && page <= prob + (t - prob < k ? t - prob : k))
            {
                count++;
            }
            prob += (t - prob < k ? t - prob : k);
            page++;
        }
    }
    cout << count << flush;

    return 0;
}
