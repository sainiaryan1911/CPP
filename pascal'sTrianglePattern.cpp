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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << NcR(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}