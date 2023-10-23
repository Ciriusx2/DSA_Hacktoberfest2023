#include <bits/stdc++.h>
using namespace std;
int peakindex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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
int main()
{
    int arr[5] = {1, 3, 4, 43, 55};
    cout << peakindex(arr, 5);
    return 0;
}