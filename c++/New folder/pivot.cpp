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
int main()
{
    int arr[] = {7,9,10,2,3,4};
    cout << getpivot(arr, 6);
    return 0;
}