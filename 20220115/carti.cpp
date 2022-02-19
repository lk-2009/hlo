#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("carti.in");
ofstream fout("carti.out");

int p, n, pc, mxpg, pg, S, c, copie, nr,x;
int main()
{
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> p;
        if (p < 1000)
        {
            S = 0;
            pc=0;
            pg = 0;
            while (p > 0)
            {
                pc=p%10;
                S = S + p % 10;
                p /= 10;
            }
            pg = pc * S; 
            if (pg > mxpg)
            {
                c = 0;
                mxpg = pg;
            }
             if (pg == mxpg) c++;
        }
        else if (p >= 1000)
        {
            S = 0;
            pg = 0;
            x=0;
            copie = p;
            while (p > 0)
            {
                x++;
                p /= 10;
            }
            p = copie;
            nr = p / pow(10, x - 2);
            p = copie;
            while (p > 0)
            {
                S = S + p % 10;
                p /= 10;
            }
            pg = nr * S;
            if (pg > mxpg)
            {
                c = 0;
                mxpg = pg;
            }
             if (pg == mxpg) c++;
        }
    }
    cout<<c<<" "<<mxpg;
}
