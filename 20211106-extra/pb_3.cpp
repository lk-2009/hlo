}#include <iostream>
using namespace std;

int a, b,S,sn;
int main()
{

    cout << "a= ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            S = S + i;
    }
    for (int i = 1; i <= S; i++)
    {
        if (S % i == 0)
            b++;
    }
    if (b == 2)
    {
        while (a > 0)
        {
            sn = sn + a % 10;
            a /= 10;
        }
    }
    else
    {
        while (a > 0)
        {
            if ((a % 10) % 2 == 1)
                sn = sn + a % 10;
            a /= 10;
        }
    }
    cout << sn;
}