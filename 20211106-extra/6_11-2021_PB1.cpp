#include <iostream>
using namespace std;

bool oka,okb;
int a, b, x, y, c, uc, ca, cb, n;
int main()
{
    cin >> a >> b;
    cb = b;
    x = a;
    ca = a;
    for(int i = 0;i<10;i++){
        a=ca;
        b=cb;
        oka = false;
        okb = false;
        while(a>0){
            if(a%10==i){
                oka=true;
                break;
            }
            a/=10;
        }
        if(oka){
            while(b>0){
                if(b%10==i){
                okb=true;
                break;
                }
                b/=10;
            }
            if(okb) cout<<i<<endl;

        }

    }


   /* while (x > 0)
    {
        uc = x % 10;
        a = ca;
        c = 0;
        while (a > 0)
        {
            if (a % 10 == uc)
                c++;
            a /= 10;
        }
        x /= 10;

        if (c == 1)
        {
            c = 0;
            b = cb;
            while (b > 0)
            {
                if (b % 10 == uc)
                {
                    c++;
                }
                b /= 10;
            }
            if (c >= 1)
                cout << uc << endl;
        }
    }
*/
    for (int i = 9; i >= 0; i--)
    {
        c = 0;
        a = ca;
        b = cb;
        while (a > 0)
        {
            if (a % 10 == i)
                c++;
            a = a / 10;
        }

        while (b > 0)
        {
            if (b % 10 == i)
                c++;
            b /= 10;
        }

        while (c > 0)
        {
            n = n * 10 + i;
            c--;
        }
    }
    cout << endl
         << n << endl;
}
