#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");

int v[1000],k,a,mn,n,mx,mi,mj,x,cx,c;
bool nxt,sortat;
int main()
{

    fin >> n;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        nxt = true;
        fin >> x;
        cx = x;
        while (x > 0)
        {
            c++;
            x /= 10;
        }
        x = cx;
        if (c % 2 == 1)
        {
            cout<<endl;
            mj=(c - 1) / 2 + 1;
            while (c > mj)
            {
                x /= 10;
                c--;
            }
            if (x % 10 == 5)
            {
               x/=10; 
            while (x > 0)
                {
                    if (x % 10 >= 5)
                        nxt = false;
                    x /= 10;
                }
                if (nxt)
                {
                    cout<<cx<<" "<<x<<" "<<c<<endl;
                    x = cx;
                    a = (c - 1) / 2 + 1;
                    while (a > 0)
                    {
                        if (x % 10 <= 5)
                            nxt = false;
                        a--;
                        x /= 10;
                    }
                    cout<<cx;
                }
                if (nxt && cx > mx)
                {
                    mx = cx;
                    mi=i;
                }
                if(nxt) v[k++]=cx;
            }
        }
    }
    do{
        sortat=true;
        for ( int i = 0; i < k-1; i++)
        {
            if(v[i]>v[i+1]){
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=false;
            }
            
        }
        
    }while(!sortat);
    mn=v[1]-v[0];
    for (int i = 1; i < k-1; i++)
    {
        if(v[i+1]-v[i]<mn) mn=v[i+1]-v[i];
    }
    fout<<mx<<" "<<mi+1<<endl;
    fout<<mn<<endl;
    for (int i = 0; i < k; i++)
    {
        fout<<v[i]<<" ";
    }
    
    
}