#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int NcR(int n, int r)
{
    int nCr = (factorial(n)) / (factorial(n - r) * factorial(r));
    return nCr;
}
int NpR(int n, int r)
{
    int nPr = factorial(n) / factorial(n - r);
    return nPr;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, r, op;
    cin >> n >> op >> r;
    if (op == 1)
    {
        cout << n << "P" << r << " = " << NpR(n, r);
    }
    else if (op == 0)
    {
        cout << n << "C" << r << " = " << NcR(n, r);
    }
    else
    {
        cout << "Wrong input.";
    }

    return 0;
}