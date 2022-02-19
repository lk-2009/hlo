/*2.O broscuţă se deplasează efectuând câte o săritură de lungime p cm la fiecare secundă. După fiecare n secunde
broscuţa devine mai obosită, iar lungimea săriturii pe care o face se înjumătăţeşte. Scrieţi un program care să citească de
la tastatură lungimea iniţială a săriturii, p, numărul de secunde după care broscuţa îşi injumătăţeşte saltul, n, precum şi
durata totală a deplasării broscuţei T (exprimată în secunde) şi care să determine distanţa totală pe care a parcurs-o
broscuţa. Distanţa totală determinată va fi afişată pe ecran cu două zecimale. Restricţii: p, n, T sunt numere naturale; p,
n, T&lt;30000;T/n&lt;16 Exemplu Pentru n=10, p=20 şi T=33, distanţa totală pe care se deplasează broscuţa este 357.50
cm.*/

#include <iostream>
using namespace std;

float S, p;
int T, n,cn;
int main()
{
    cin >> p >> n >> T;
    cn=n;
    while (T > 0)
    {
        if(n==0){
            p/=2;
            n=cn;
        }
        S = S + p;
        T--;
        n--;
    }
    cout << S;
}