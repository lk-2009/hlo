#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("iepuri.in");
ifstream fin2("iepuri.in");
ofstream fout("iepuri.out");

int n,p,mx,x,cx,cy,y,z,cmmmc;
int main(){
    fin>>n;
    fin>>x;
    cx=x;
    z=1;
    for(int i = 1;i<n;i++){
        fin>>y;
        cy=y;
        p=x*y;
        while(x!=y){
            if(x>y) x-=y;
            else y-=x;
        }
        cmmmc=p/x;
        if(cmmmc>mx){
            mx=cmmmc;
        }
        x=cmmmc;

    }
    fout<<mx<<endl;
    fin2>>n;
   for(int i = 0; i < n;i++){
       fin2>>x;
        fout<<mx/x<<" ";
   }
}