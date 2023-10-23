#include <bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int s, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j]== s)
                ans++;

    return ans;
}
int main()
{
    int arr[] = {1, 2, 4, 3, 5, 6};
    int s = 7;
    int n = sizeof(arr) / sizeof(int);
    cout<<pairSum(arr, s, n);
    return 0;
}
