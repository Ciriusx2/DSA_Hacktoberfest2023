#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    ++a;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
    return 0;
}