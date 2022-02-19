#include <iostream>
using namespace std;

int n,k,h,S;
int main(){

        cin>>n>>k>>h;
        for(int i = 1;i<=n;i++){
            if(i%k==0&&i%h!=0){
                S=S+i;
            }
        }
        cout<<S%10;
}
