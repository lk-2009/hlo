#include <iostream>
using namespace std;

int n,k,a;
int main(){

    cin>>n>>k;
    a=n/k;
    if(n-a*k>abs(n-(a+1)*k)) cout<<(a+1)*k;
    else cout<<a*k;
}