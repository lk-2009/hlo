#include <iostream>
using namespace std;

int n,a,b;
int main(){

    cin>>n>>a>>b;
    if(n%a<n%b) cout<<"prima zi";
    else if(n%a>n%b) cout<<"a doua zi";
    if(n%a==n%b){
        if(n/a>=n/b) cout<<"a doua zi";
        else cout<<" prima zi";
    }

}