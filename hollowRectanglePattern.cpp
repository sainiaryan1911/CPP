#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int numCol, numRow;
    cin >> numRow >> numCol;
    for (int i = 1; i <= numRow; i++)
    {
        for (int j = 1; j <= numCol; j++)
        {
            if (i == 1 || i == numRow)
            {
                cout << "* ";
            }
            else if (j == 1 || j == numCol)
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