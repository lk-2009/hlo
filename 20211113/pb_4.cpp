#include <iostream>
using namespace std;

int a,n1,n2,n3,c;
int main(){

    cin>>a;
    n1=a/100*10+a%100/10;
    n2=a/100*10+a%10;
    n3=a%100/10*10+a%10;
    cout<<"a. "<<n1<<" "<<n2<<" "<<n3<<endl;

    if(n1%2==1 && n1/10%2==1) c++;
    if(n2%2==1 && n2/10%2==1) c++;
    if(n3%2==1 && n3/10%2==1) c++;
    cout<<" b. "<<c<<endl;

    if( n1>n2&&n2>n3) cout<<n1<<" "<<n2<<" "<<n3<<endl;
    else if( n1>n3&&n3>n2) cout<<n1<<" "<<n3<<" "<<n2<<endl;
    else if( n2>n1&&n1>n3) cout<<n2<<" "<<n1<<" "<<n3<<endl;
    else if( n2>n3&&n3>n1) cout<<n2<<" "<<n3<<" "<<n1<<endl;
    else if( n3>n2&&n2>n1) cout<<n3<<" "<<n2<<" "<<n1<<endl;
    else if( n3>n1&&n1>n2) cout<<n3<<" "<<n1<<" "<<n2<<endl;
  
    
}