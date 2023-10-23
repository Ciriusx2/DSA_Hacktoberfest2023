#include <bits/stdc++.h>
using namespace std;
void arrarotation(int arr[], int n, int d)
{
    int temp[n];
    int k = 0;
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int d = 2;
    printarr(arr, n);
    arrarotation(arr, n, d);
    cout<<endl;
    printarr(arr, n);
    return 0;
}