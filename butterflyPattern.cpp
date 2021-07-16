#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int numRow, c = 1;
    cin >> numRow;
    for (int i = 1; i <= numRow; i++)
    {
        for (int j = 1; j <= numRow; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = numRow; j >= 1; j--)
        {
            if (j <= i)
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
    for (int i = numRow; i >= 1; i--)
    {
        for (int j = 1; j <= numRow; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = numRow; j >= 1; j--)
        {
            if (j <= i)
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