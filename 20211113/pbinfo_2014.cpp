#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("canguri.in");
ofstream fout("canguri.out");

int e1,e2,e3,s1,s2,s3;
int main(){

    fin>>e1>>s1>>e2>>s2>>e3>>s3;
    if(s1>s2&&s1>s3){
        fout<<e1;
        fout<<endl;
        if(800%s1!=0) fout<<800/s1+1;
        else fout<<800/s1;
        
    } 
    if(s2>s3&&s2>s1){
        fout<<e2;
        fout<<endl;
        if(800%s2!=0) fout<<800/s2+1;
        else fout<<800/s2;
        
    } 
    if(s3>s2&&s3>s1){
        fout<<e3;
        fout<<endl;
        if(800%s3!=0) fout<<800/s3+1;
        else fout<<800/s3;
        
    } 
    
}