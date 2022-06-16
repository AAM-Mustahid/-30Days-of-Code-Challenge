#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int len, i, l;
    string s;
    string a, b;

    int t;
    cin >> t;
    for (l = 1; l <= t; l++)
    {
        string s;
        string a, b;
        cin >> s;
        len = s.size();
        for (i = 0; i <= len - 1; i++)
        {
            if (i % 2 == 0)
            {
                a += s[i];
            }
            else
            {
                b += s[i];
            }
        }

        cout << a << " " << b << endl;
    }

    return 0;
}