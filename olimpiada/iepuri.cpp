#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("iepuri.in");
ifstream fin2("iepuri.in");
ofstream fout("iepuri.out");

int n,x,y,mx,cy,cx;
int main(){
    fin>>n;
    fin>>x;
    cx=x;
    while(n>0){
        fin>>y;
        cy=y;
        x=cx;
        while(x!=y){
            if(x>y)
            x-=y;
            else
            y-=x;
        }
        if(mx<cx*cy/x) mx=cx*cy/x;
        n--;
    }
    fout<<mx<<endl;
    fin2>>n;
    while(n>0){
        fin2>>x;
        fout<<mx/x<<" ";
        n--;
    }
}