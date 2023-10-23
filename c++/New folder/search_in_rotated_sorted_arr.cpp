#include <bits/stdc++.h>
using namespace std;
int getpivot(int arr[], int n)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int element)
{
    int low, mid, high;
    low = s;
    high = e;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int findposition(int arr[], int n, int k)
{
    int pivot = getpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {10, 11, 12, 1, 3, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << findposition(arr, n, 7);

    return 0;
}