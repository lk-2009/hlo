#include <iostream>
using namespace std;

int R,G,B;
int main(){

    cin>>R>>G>>B;
    if(R>255||G>255||B>255||R<0||G<0||B<0) cout<<"NU E CULOARE";
    else{
        if(abs(R-G)<=10 && abs(R-B)<=10 && abs(G-B)<=10) cout<<"GRI";
        else  cout<<"CULOARE";
    }
}