/*1.     Se consideră trei numere întregi. Dacă toate sunt pozitive, să se afişeze numărul mai mare dintre al doilea şi al treilea număr, în caz contrar să se calculeze suma primelor două numere.  Exemple: Date de intrare   45  23  100  date de ieşire 100 ;  
Date de intrare  34  -25  10  
Date de ieşire  9.
*/
#include <iostream>
using namespace std;

int a, b, c;
int main(){

    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0){
        if(b>=c) cout<<b;
        else cout<<c;
    }else cout<<a+b;

}