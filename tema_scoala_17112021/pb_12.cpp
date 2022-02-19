#include <iostream>
using namespace std;

int x,e;
int main(){
    cin>>x;
    if(x<0){
        e=-x;
    }else e=x*x;
    cout<<e;
}