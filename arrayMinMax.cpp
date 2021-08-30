#include <iostream>
using namespace std;

int minFn(int arr[], int n)
{
    int min = INT_MAX; //INT_MAX is the maximum possible value of an integer in c++.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int maxFn(int arr[], int n)
{
    int max = INT_MIN; //INT_MIN is the minimum possible value of an integer in c++.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i;
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum element in the array is: " << minFn(arr, n) << endl;
    cout << "Maximum element in the array is: " << maxFn(arr, n) << endl;

    // Alternatively there are inbuilt functions also.
    for (i = 0; i < n; i++)
    {
        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }
    cout << "MIN: " << minNo << endl;
    cout << "MAX: " << maxNo << endl;

    return 0;
}