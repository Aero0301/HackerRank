#include <iostream>

using namespace std;

int h, m;

string words(int a)
{
    string arr[59] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                      "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen,", "eighteen", "nineteen",
                      "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six",
                      "twenty seven", "twenty eight", "twenty nine", "half"};

    return arr[a - 1];
}

int main()
{
    cin >> h >> m;
    if (m == 0)
    {
        cout << words(h) << " o' clock" << flush;
    }
    else if (m <= 30)
    {
        cout << words(m) << flush;
        if (m == 1)
        {
            cout << " minute past " << words(h) << flush;
        }
        else if (m == 15 || m == 30)
        {
            cout << " past " << words(h) << flush;
        }
        else
        {
            cout << " minutes past " << words(h) << flush;
        }
    }
    else
    {
        cout << words(60 - m) << flush;
        if (60 - m == 1)
        {
            cout << " minute to " << words(h + 1) << flush;
        }
        else if (60 - m == 15 || 60 - m == 30)
        {
            cout << " to " << words(h + 1) << flush;
        }
        else
        {
            cout << " minutes to " << words(h + 1) << flush;
        }
    }

    return 0;
}
