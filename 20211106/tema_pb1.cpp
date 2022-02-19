#include <iostream>
using namespace std;

int a,n1,n2,n3,mx;
int main(){

    cin>>a;
    n1=a/1000%10*10+a/100%10;
    n2=a%10*10+a/10000;
    n3=a/10%10*10+a/100%10;
    mx=n1;
    if(mx<n2) mx=n2;
    if(mx<n3) mx=n3;
    cout<<n1<<endl<<n2<<endl<<n3;
    cout<<endl<<"max= "<<mx
}