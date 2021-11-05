#include <iostream>
using namespace std;

int a,b,dif;
int main(){

    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    if(a>=b){ 
        cout<<a<<" primul copil este mai mare  cu "<<a-b<<" ani";
        }
    else cout<<b<<" al doilea copil este mai mare  cu "<<b-a<<" ani";
}