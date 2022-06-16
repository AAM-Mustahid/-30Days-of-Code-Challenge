#include <iostream>
#include <bits/stdtr1c++.h>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double e;
    string f;
    cin >> j;
    cin >> e;
     cin.ignore(); // inout method cin and getline is mixed here so it is conflicted. to remove this conflite we use this function.
     getline(cin, f);
   // cin >> f; // if you takes input by cin then it never saves any data after a space.
    int result = i + j;
    double ans = d + e;
    s = s + f;
    cout << result << endl;
    cout << fixed << setprecision(1) << ans << endl;
    cout << s << endl;

    return 0;
}