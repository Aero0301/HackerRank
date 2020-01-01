#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s, str = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            str += s[i];
        }
    }
    const int L = str.length();
    int c;
    c = ceil(sqrt(L));
    for (int i = 0; i < c; i++)
    {
        for (int index = i; index < L; index += c)
        {
            cout << str[index] << flush;
        }
        if (i != c - 1)
        {
            cout << " " << flush;
        }
    }

    return 0;
}
