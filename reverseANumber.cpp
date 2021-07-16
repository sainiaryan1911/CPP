#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, temp, rev = 0;
    cin >> n;
    while (n != 0)
    {
        temp = n % 10;
        rev = (rev * 10) + temp;
        n = n / 10;
    }
    cout << rev;

    return 0;
}