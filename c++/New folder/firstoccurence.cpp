#include <bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int w)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == w)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > w)
        {
            e = mid - 1;
        }
        else if (arr[mid] < w)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 1, 2,2,3,6,6,6,6};

    cout << "First occurence at index " << firstOccurance(arr, 9, 6) << endl;
    cout << "Last occurence at index " << lastOccurance(arr, 9, 6) << endl;
    int count=(lastOccurance(arr,9,6)-firstOccurance(arr,9,6))+1; //total no of occurences.............
    cout<<count<<endl;
    cout << "PADHAI KARO LEKIN LIMIT MAI" << endl;
    return 0;
}