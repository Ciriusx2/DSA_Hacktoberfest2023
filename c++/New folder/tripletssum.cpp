#include <bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int s, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (arr[i] + arr[j] + arr[k] == s)
                    ans++;

    return ans;
}
int main()
{
    int arr[] = {1, 2, -4, 3, 5, -6};
    int s = 6;
    int n = sizeof(arr) / sizeof(int);
    cout << pairSum(arr, s, n);
    return 0;
}
