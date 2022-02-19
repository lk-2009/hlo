/*În oraşul Olimpidia, toate băncile au hotărât să adopte o convenţie în ceea ce priveşte identificarea clienţilor săi, astfel încât fiecare cont deschis de un client să aibă asociat un cod format din exact 6 cifre:

prima cifră (cea mai din stânga cifră a codului) va reprezenta numărul băncii (acest lucru fiind posibil deoarece în oraş nu sunt mai mult de 9 bănci, acestea fiind numerotate începând de la 1);
a doua cifră va reprezenta genul persoanei (1 pentru genul masculin şi 2 pentru genul feminin);
ultimele 4 cifre vor reprezenta suma aflată în contul persoanei în momentul în care se aplică stabilita convenţie.
Cerința
Cunoscând numărul total de conturi deschise şi codurile corespunzătoare acestora să se determine suma maximă pe care o are o persoană de gen masculin într-un cont aflat la banca X.

*/
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream fin("test.in");
ofstream fout("test.out");

int n,S,g,x,a,ca,c,mx;
int main(){

    fin>>n;
    fin>>x;
    for (int i = 1; i <= n; i++)
    {
        fin>>a;
        ca=a;

        if(a/100000==x){

            if((ca/10000)%10==1){
                

                if(a%100000>mx) mx=ca%100000;
            }
        }

    }
    cout<<mx;
    
}