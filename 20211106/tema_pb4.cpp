#include <iostream>
using namespace std;

int n,n1,n2;
int main(){

    cin>>n;
    if(n%2==0){
        n1=n+2;
        n2=n+4;
    }
    else{
        n1=n+1;
        n2=n+3;
    }
    cout<<n1<<" "<<n2;
}