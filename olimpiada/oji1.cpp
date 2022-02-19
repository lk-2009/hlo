#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("DATE.in");
ofstream fout("DATE.out");

int v[1000], i, mn, mx;
int main()
{
    while (fin >> x){
        
        if (x < 0 && mn == 0)  mn = i;
        if (x < 0)  mx = i;
        i++;
    }
    
    
}

