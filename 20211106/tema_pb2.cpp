#include <iostream>
using namespace std;

int a,n,ca,p,pc;
int main(){

    cin>>a;
    p=1;
    ca=a;
    while(a>9){
        p=p*10;
        a=a/10;
    }
    while(ca>0){
        
        pc=ca/p;
        if(pc%2==1) n=n*10+pc;
        ca=ca%p;
        p/=10;
        
    }
    
    cout<<n;
    
}