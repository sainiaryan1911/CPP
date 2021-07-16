#include <iostream>
#include <cmath>
using namespace std;

int decimalToOctal(int n)
{
    int place = 1;
    int oct = 0;
    // find the maximum power of 8 that is less than n.
    while (place <= n)
    {
        place *= 8;
    }
    // above loop executes one step extra as it terminates when the place is gretaer than n.
    place /= 8;
    // loop to convert number to octal.
    while (place > 0)
    {
        int lastdigit = n / place;
        n -= lastdigit * place;
        place /= 8;
        oct = oct * 10 + lastdigit;
    }

    return oct;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << decimalToOctal(n);

    return 0;
}