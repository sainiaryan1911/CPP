#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num, n, Anum = 0;
    cin >> num;
    n = num;
    while (n != 0)
    {
        Anum = Anum + pow((n % 10), 3);
        n = n / 10;
    }
    if (Anum == num)
    {
        cout << num << " is an 'Armstrong's Number'.";
    }
    else
    {
        cout << num << " is not an 'Armstrong's Number'.";
    }

    return 0;
}