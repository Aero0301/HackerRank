#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string ex1;
        cin >> ex1;
        string ex2 = ex1, ex3 = ex1;
        sort(ex3.begin(), ex3.end());
        next_permutation(ex1.begin(), ex1.end());
        if (ex2 == ex1 || ex1 == ex3)
        {
            cout << "no answer" << endl;
        }
        else
        {
            cout << ex1 << endl;
        }
    }

    return 0;
}
