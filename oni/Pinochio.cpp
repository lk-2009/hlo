#include <iostream>
using namespace std;

int n,k,p;
int main(){

    cin>>n>>p>>k;
    for (int i = 1; i <= k; i++)
    {
        if(i%7==6||i%7==0) n--;
        else n+=p;
    }
    cout<<n<<" cm";    
}