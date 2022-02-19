#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("piramida.in");
ofstream fout("piramida.out");

int v[1000000], n, x, c, j, d, z;
int main()
{
    z = 1;
    fin >> n >> x;
    for (int i = 1; i < n; i++)
    {
        v[z++] = i;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                c = 2;
                for (int k = 2; k < j; k++)
                {
                    if (j % k == 0)
                        c++;
                }
                if (c == 2)
                {
                    v[z++] = j;
                }
            }
        }
        cout << endl;
    }
    bool ok=true;;
    c = 1;
    for (int i = 0; i <= n; i++)
    {
        if(ok){
        for (int j = 0; j < i; j++)
        {
            if(v[c]==x){
                fout<<i<<" "<<j+1<<endl;
            } 
            cout << v[c++] << " ";
            if (c == n)
                ok=false;
        }
        cout << endl;
        }
    }


}