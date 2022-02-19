#include <iostream>
using namespace std;

int n1, n2, mx1, mx2, mn1, mn2, uc;
int main()
{

    cin >> n1 >> n2;
    mx1 = mn1 = n1 % 10;
    mx2 = mn2 = n2 % 10;

    while (n1 > 0)
    {
        uc = n1 % 10;
        if (uc > mx1)
            mx1 = uc;
        if (uc < mn1)
            mn1 = uc;
        n1 /= 10;
    }

    while (n2 > 0)
    {
        uc = n2 % 10;
        if (uc > mx2)
            mx2 = uc;
        if (uc < mn2)
            mn2 = uc;
        n2 /= 10;
    }


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

// 100 - 900; 