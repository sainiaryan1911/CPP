#include <iostream>
using namespace std;

int maxTill_i(int arr[], int n, int i)
{
    int mx = INT_MIN;
    for (int j = 0; j <= i; j++)
    {
        mx = max(mx, arr[j]);
        cout << mx << " ";
    }
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    cin >> i;
    maxTill_i(arr, n, i);

    return 0;
}