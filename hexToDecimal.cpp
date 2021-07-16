#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int hexToDecimal(string n)
{
    int dec = 0;
    int place = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            // minus '0' is used as the char ascii of any from 0-9 minus '0' will give us their difference which will be equal to the number that it is.
            dec += place * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += place * (n[i] - 'A' + 10);
        }
        place *= 16;
    }
    return dec;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string n;
    cin >> n;
    cout << hexToDecimal(n);

    return 0;
}