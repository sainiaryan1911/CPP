#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    bool prime = 1;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << n << " is neither a prime number nor a composite number.";
        return 0;
    }
    for (int i = 3; i < sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        cout << n << " is not a prime number.";
    }
    else
    {
        cout << n << " is a prime number.";
    }

    return 0;
}