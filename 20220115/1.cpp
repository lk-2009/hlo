#include <iostream>
using namespace std;

int f,b,cf,cb,cmmdc;
int main(){
    cin>>b>>f;
    cf=f;
    cb=b;
    while(b!=f){
        if(b>f)
            b-=f;
        else
            f-=b;
    }
    cout<<b<<" nr echipe"<<endl;
    cout<<" baieti intr o echipa "<<cb/b<<endl;
    cout<<" fete intr o echipa "<<cf/b<<endl;
}