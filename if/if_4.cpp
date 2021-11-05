#include <iostream>
using namespace std;

int a,b,c,S;
int main(){

    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    cout<<"S= ";cin>>S;

    if(a+b==S) cout<<c;
    if(a+c==S) cout<<b;
    if(c+b==S) cout<<a;
    
    
    
}