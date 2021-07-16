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
        for (int j = 1; j <= numRow - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << "* ";
        }
        cout << "* ";
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = numRow; i >= 1; i--)
    {
        for (int j = 1; j <= numRow - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << "* ";
        }
        cout << "* ";
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}