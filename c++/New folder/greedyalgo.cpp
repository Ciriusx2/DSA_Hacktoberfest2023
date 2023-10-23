#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter the amount" << endl;
    cin >> a;
    float Rs100, Rs50, Rs20, Rs1;
    switch (1)
    {
    case 1:
        Rs100 = a / 100;
        a = a % 100;
        cout << "No. of 100 rupees note = " << Rs100 << endl;
    case 2:
        Rs50 = a / 50;
        a = a % 50;
        cout << "No. of 50 rupees note = " << Rs50 << endl;
    case 3:
        Rs20 = a / 200;
        a = a % 20;
        cout << "No. of 20 rupees note = " << Rs20 << endl;
    case 4:
        Rs1 = a / 1;
        a = a % 1;
        cout << "No. of 1 rupees note = " << Rs1 << endl;
    }
    return 0;
}