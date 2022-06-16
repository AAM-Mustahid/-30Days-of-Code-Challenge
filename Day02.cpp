#include <bits/stdc++.h>
using namespace std;
void solve(double a, int tip, int tax)
{
    double total;
    double c = (a * tip) / 100;
    double d = (a * tax) / 100;
    total = a + c + d;
    cout << round(total) << endl; // round is used for rounded integer number
}

int main()
{
    int tip, tax;
    double mealcost;
    cin >> mealcost >> tip >> tax;
    solve(mealcost, tip, tax);
}
