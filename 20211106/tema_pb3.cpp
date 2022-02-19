#include <iostream>
using namespace std;

int n,n1,n2;
int main(){

    cin>>n;
    if(n%2==0){
        n1=n-3;
        n2=n-1;
    }
    else{
        n1=n-4;
        n2=n-2;
    }
    cout<<n1<<" "<<n2;
}