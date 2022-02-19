/*det cea mai lunga secventa care fie incepe fie se termina cu un negativ*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("data.in");
ifstream fin2("data.in");
ofstream fout("data.out");

int x,i,mx1,mx2,mn1,mn2;
int main(){

    while (fin>>x)
    {
        if (x < 0 && mn1 == 0)  mn1 = i;
        if (x > 0)  mx1 = i;
        
        if (x > 0 && mn2 == 0)  mn2 = i;
        if (x < 0)  mx2 = i;

        i++;
    }
    
    if(mx1-mn1+1>mx2-mn2+1) fout<<mx1-mn1+1;
    else fout<<mx2-mn2+1;
    
}