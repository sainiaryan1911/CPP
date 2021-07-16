#include <iostream>
#include <cmath>
using namespace std;

string decimalToHex(int n)
{
    int place = 1;
    string hex = "";
    // find the maximum power of 16 that is less than n.
    while (place <= n)
    {
        place *= 16;
    }
    // above loop executes one step extra as it terminates when the place is gretaer than n.
    place /= 16;
    // loop to convert number to hexadecimal.
    while (place > 0)
    {
        int lastdigit = n / place;
        n -= lastdigit * place;
        place /= 16;

        if (lastdigit <= 9)
        {
            hex = hex + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            hex = hex + c;
        }
    }

    return hex;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << decimalToHex(n);

    return 0;
}