#include <iostream>
using namespace std;

int n1, n2, mx1, mx2, mn1, mn2, uc;
int n1c1, n1c2, n1c3, n2c1, n2c2, n2c3;
int main()
{

    cin >> n1 >> n2;

    n1c1 = n1 / 100;
    n1c2 = n1 % 100 / 10;
    n1c3 = n1 % 10;

    n2c1 = n2 / 100;
    n2c2 = n2 % 100 / 10;
    n2c3 = n2 % 10;

    mx1 = mn1 = n1c1;
    if (mx1 < n1c2)
        mx1 = n1c2;
    if (mx1 < n1c3)
        mx1 = n1c3;

    if (mn1 > n1c2)
        mn1 = n1c2;
    if (mn1 > n1c3)
        mn1 = n1c3;

    mx2 = mn2 = n2c1;
    if (mx2 < n2c2)
        mx2 = n2c2;
    if (mx2 < n2c3)
        mx2 = n2c3;

    if (mn2 > n2c2)
        mn2 = n2c2;
    if (mn2 > n2c3)
        mn2 = n2c3;

    //max
    if (mx1 > mx2)
        cout << mx1 * 10 + mx2;
    else
        cout << mx2 * 10 + mx1;
    cout << " ";

    if (mn1 == 0 || mn2 == 0)
    {
        if (mn1 == 0)
            cout << mn2 * 10;
        else
            cout << mn1 * 10;
    }
    else if (mn1 < mn2)
        cout << mn1 * 10 + mn2;
    else
        cout << mn2 * 10 + mn1;
}