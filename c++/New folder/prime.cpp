#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "Not a prime number" << endl;
            prime = 0;
            break;
        }
    }
    if (prime == 0)
        cout << "not prime";
    else
        cout << "prime";
    return 0;
}