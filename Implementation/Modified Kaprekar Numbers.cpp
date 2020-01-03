#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int p, q, d, count = 0;
    long long int sq;
    stringstream s, ss, r, l;
    r.str("0");
    l.str("0");
    cin >> p >> q;
    for (long long int i = p; i <= q; i++)
    {
        int r1, l1;
        sq = i * i;
        ss << sq;
        string temp = ss.str();
        s << i;
        d = s.str().length();
        for (string::iterator it = temp.begin(); it != temp.end(); it++)
        {
            string::iterator it1 = temp.end() - d;
            if (it < temp.end() - d)
            {
                l << *it;
            }
            else
            {
                r << *it;
            }
        }
        l >> l1;
        r >> r1;
        if (r1 + l1 == i)
        {
            cout << i << " " << flush;
            ++count;
        }
        ss.clear();
        ss.str("");
        s.clear();
        s.str("");
        r.str("0");
        r.clear();
        l.clear();
        l.str("0");
    }
    if (count == 0)
    {
        cout << "INVALID RANGE" << flush;
    }

    return 0;
}
