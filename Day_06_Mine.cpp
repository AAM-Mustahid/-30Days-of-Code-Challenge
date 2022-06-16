#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int len, i, j, k, l;

    int t;
    cin >> t;
    for (l = 1; l <= t; l++)
    {
        string s;
        char a[500], b[500];
        j = k = 0;

        cin >> s;
        len = s.size();
        for (i = 0; i <= len - 1; i++)
        {
            if (i % 2 == 0)
            {
                a[j] = s[i];
                j++;
            }
            else
            {
                b[k] = s[i];
                k++;
            }
        }
        a[j] = '\0';
        b[k] = '\0';
        cout << a << " " << b << endl;
    }

    return 0;
}