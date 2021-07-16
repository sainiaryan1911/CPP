#include <iostream>
#include <cmath>
using namespace std;

bool isPythagorian(int a, int b, int c)
{
    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, y, z;
    cin >> x >> y >> z;
    if (max(x, max(y, z)) == x)
    {
        if (isPythagorian(x, y, z))
        {
            cout << x << " " << y << " " << z << " form a Pythagorian Triplet.";
        }
        else
        {
            cout << x << " " << y << " " << z << " do not form a Pythagorian Triplet.";
        }
    }
    else if (max(x, max(y, z)) == y)
    {
        if (isPythagorian(y, x, z))
        {
            cout << x << " " << y << " " << z << " form a Pythagorian Triplet.";
        }
        else
        {
            cout << x << " " << y << " " << z << " do not form a Pythagorian Triplet.";
        }
    }
    else if (max(x, max(y, z)) == z)
    {
        if (isPythagorian(z, y, x))
        {
            cout << x << " " << y << " " << z << " form a Pythagorian Triplet.";
        }
        else
        {
            cout << x << " " << y << " " << z << " do not form a Pythagorian Triplet.";
        }
    }
    else
    {
        cout << x << " " << y << " " << z << " do not form a Pythagorian Triplet.";
    }

    return 0;
}