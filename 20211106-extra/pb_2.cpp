#include <iostream>
using namespace std;

int b,f,cb,cf,r;
int main(){

    cout<<"b= "; cin>>b;
    cout<<"f= "; cin>>f;
    cb=b;
    cf=f;
    while(b!=f){
      if(b>f) b-=f;
      else f-=b;
    }
    if(b>1){
        cout<<b<<" echipe cu "<<cb/b<<" baieti si "<<cf/b<<" fete";

    }else cout<<"nu putem juca";
}
