#include <iostream>
using namespace std;

int a,b,c,x1,x2,x3;
int main(){

    cin>>a>>b>>c;
    x1=a*100+b*10+c;
    x2=a*100+c*10+b;
    x3=b*100+c*10+a;
    x4=b*100+a*10+c;
    x5=c*100+a*10+b;
    x6=c*100+b*10+a;
    cout<<x1<<" "<<x2
    <<" "<<x3<<" "<<x4
    <<" "<<x5<<" "<<x6;
}