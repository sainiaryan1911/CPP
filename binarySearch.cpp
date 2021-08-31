#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int mid, starting_index = 0, ending_index = n - 1;
    while (true)
    {
        mid = (starting_index + ending_index) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            ending_index = mid - 1;
        }
        else
        {
            starting_index = mid + 1;
        }
    }

    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, n, key);
    return 0;
}