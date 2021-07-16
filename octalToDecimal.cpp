#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int n)
{
    int dec = 0, temp;
    int place = 1;
    while (n != 0)
    {
        temp = n % 10;
        dec += temp * place;
        place *= 8;
        n /= 10;
    }
    return dec;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << octalToDecimal(n);

    return 0;
}