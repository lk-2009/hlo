#include <iostream>
using namespace std;


int n,x,S;
int main(){
    cin>>n;
    for(int i = 1; i <= n;i++){
        cin>>x;
        S=0;
        while(x>0){
            S=S+x%10;
            x/=10;
        }
        if(S%2==1) cout<<i<<" ";
    }

}