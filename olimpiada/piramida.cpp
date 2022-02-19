#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("piramida.in");
ofstream fout("piramida.out");

int n, c,p, x, v[1000];
int main()
{
    fin >> n;
    fin>>x;
    p = 1;
    for (int i = 1; i < n; i++)
    {
        v[p++] = i;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                c = 2;
                for (int k = 2; k <= j / 2; k++)
                {
                    if (j % k == 0)
                        c++;
                }
                if (c == 2)
                {
                    v[p++] = j;
                }
            }
        }
    }
    p = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (p > n){

            }
            else
            {
                if(v[p]==x) fout<<i<<" "<<j<<endl;
                p++;
            }
        }
    }
}
