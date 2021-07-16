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
    for (int i = numRow; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= numRow; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}