/*2.    Să se afişeze cel mai mare număr par dintre doua numere introduse în calculator.
Exemple : Date de intrare 23  45   Date de ieşire  nu exista numar par ; 
Date de intrare  28 14  Date de ieşire 28 ;  
Date de intrare  77 4  Date de ieşire  4. */

#include <iostream>
using namespace std;

int a,b;
int main(){

    cin>>a>>b;
    if(a%2==0&&b%2==0){
        if(a>=b) cout<<a;
        else cout<<b;
    }
    if(a%2==0&&b%2==1) cout<<a;
    if(a%2==1&&b%2==0) cout<<b;
    if(a%2==1&&b%2==1) cout<<"nu exista nr par"; 
}