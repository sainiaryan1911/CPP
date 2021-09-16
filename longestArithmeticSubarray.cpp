#include <iostream>
using namespace std;

int longestArithmeticSubarray(int arr[], int n)
{
    int currentLength = 2, previousDifference = arr[1] - arr[0], maxLength = 2;
    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) == previousDifference)
        {
            currentLength++;
        }
        else
        {
            previousDifference = arr[i + 1] - arr[i];
            currentLength = 2;
        }
        maxLength = max(maxLength, currentLength);
    }
    return maxLength;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestArithmeticSubarray(arr, n);

    return 0;
}