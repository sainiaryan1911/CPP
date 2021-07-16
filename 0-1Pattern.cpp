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
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << 1 << " ";
            }
            else if ((i - j) % 2 != 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}