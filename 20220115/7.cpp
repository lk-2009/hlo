#include <iostream>
using namespace std;

int n, s,c, S;
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s = s + i;
    }
    for (int i = 2; i <s / 2; i++)
    {
        if (s % i == 0)
            c++;
    }
    if (c == 0)
    {
        while (n > 0)
        {
            S = S + n % 10;
            n /= 10;
        }
    }
    else
    {
        while (n > 0)
        {
            if ((n % 10) % 2 == 1)
            {
                S = S + n % 10;

            }
            n /= 10;
        }
    }
    cout<<S;
}