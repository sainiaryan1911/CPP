#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int dec = 0, temp;
    int place = 1;
    while (n != 0)
    {
        temp = n % 10;
        dec += temp * place;
        place *= 2;
        n /= 10;
    }
    return dec;
}

int decimalToBinary(int n)
{
    int place = 1;
    int bin = 0;
    // find the maximum power of two that is less than n.
    while (place <= n)
    {
        place *= 2;
    }
    // above loop executes one step extra as it terminates when the place is gretaer than n.
    place /= 2;
    // loop to convert number to binary.
    while (place > 0)
    {
        int lastdigit = n / place;
        n -= lastdigit * place;
        place /= 2;
        bin = bin * 10 + lastdigit;
    }

    return bin;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;
    cout << decimalToBinary(binaryToDecimal(n1) + binaryToDecimal(n2));

    return 0;
}