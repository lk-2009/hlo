#include <iostream>
using namespace std;

int x, mx, n, S;
int main()
{

    cin >> x;
    n = x;
    while (x > 0)
    {
        if (x % 10 % 2 == 1)
        {
            S = S + x % 10;
          
        }
          x /= 10;
    }
    x = n;
    x += S;
    n=x;
    while(n>0){
        if(n%10>mx) mx=n%10;

        n/=10;
    }
    if (mx % 2 == 0)
    {
        x = x * 10 + mx;
    }
    else
    {
        mx=mx*10000;
        x+=mx;
    }
    cout<<x+1;
}