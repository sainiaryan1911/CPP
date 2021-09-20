#include <iostream>
using namespace std;

int recordBreaker(int arr[], int n)
{
    int mx = arr[0], rbdays = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            mx = arr[i];
            rbdays++;
        }
    }
    if (arr[n - 1] > mx)
    {
        rbdays++;
    }
    return rbdays;
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
    cout << recordBreaker(arr, n);

    return 0;
}
