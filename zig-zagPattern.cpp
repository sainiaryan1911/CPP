#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num, c = 1;
    cin >> num;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((j + i) % 4 == 0 || (i == 2 & j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}