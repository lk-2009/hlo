#include <iostream>
using namespace std;

long long E;
int n,k,p;
int main(){

    cin>>n>>k;
    E=1;
    for (int i = 1; i <=n; i++)
    {
        E=E*i;
    }   
    
        while(E%k==0){
            p++;
            E/=k;
        }
    cout<<p;
    
    
}