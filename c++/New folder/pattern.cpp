#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // First pattern
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star = (2 * i) - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        while (j <= n - i + 1)
        {
            cout << (n - i - j + 2);
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}