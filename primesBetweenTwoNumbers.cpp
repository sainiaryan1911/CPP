#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 3; i <= sqrt(n) + 1; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;
    cout << "Prime numbers between " << n1 << " and " << n2 << " are: " << endl;
    for (int i = n1; i <= n2; i++)
    {
        if (i != 1 & i % 2 != 0 || i == 2)
        {
            // In the next line we do not need to specify ==true for isPrime() as if condition will only execute if condition is true.
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}