#include <iostream>
using namespace std;

int n1,n2,c,cn1,d;
int main(){
    cin>>n1>>n2;
    cn1=n1;
    while(n1>0){
        c++;
        n1/=10;
    }
    n1=cn1;
    while(c>0){
        if(n1%10!=n2%10){
            d++;
        }
        n1/=10;
        n2/=10;
        c--;
    }
    cout<<" sunt "<<d<<" cifre diferite";
}