#include <iostream>
using namespace std;

int S, s, n, x, z, c;
int main()
{
    cin >> s;
    for (int i = 1; i <= s; i++)
    {
        S = 0;
        x = i;
        while (S <= s)
        {

            x++;
            S = S + x;
            if (S == s)
            {
                cout <<" "<< c << " " << i;
                z++;
                break;
            }
            c++;
        }
    }
    cout << " numar solutii " << z;
}