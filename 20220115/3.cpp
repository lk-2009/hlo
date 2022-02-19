#include <iostream>
#include <ffstream>
using namespace std;

int codH,n,x,c,d;
int main(){
    cin>>codH>>n;
    bool ok=false;
    while(n>0){
        cin>>x;
        if(ok=false&&codH==x){
            cout<<" da";
            ok=true;
        }
        if(codH/100==x/100) c++;
        if(codH/10%10==x/10%10) d++;
        n--;
    }
    if(!ok) cout<<" nu";
    cout<<endl<<c<<endl<<d;
}